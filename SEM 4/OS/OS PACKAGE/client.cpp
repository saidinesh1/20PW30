#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <time.h>

struct records
{
    int timestamp;
    int account_num;
    char operation;
    int balance;

}rec[10];


int main(int argc, char *argv[])
{
    int sockfd, portno, n;
    char sentence[1000];
    FILE *fptr;
    struct sockaddr_in serv_addr;
    struct hostent *server;
    char buffer[256];
    char line[256];
    char *data;
    FILE *fp=NULL;
    int count=0,z=0,waittime=0;
    int reccount=0;
    int c_time,n_time;
    char filename[20];
    float interval=0;
    double start, end;
    double duration,finaltime;
    int recsent=0;
    //Client arguments check if not error
    if (argc < 5) {
       printf("Error: Less no. of arguments");
       exit(1);
    }
    //Create a socket and check for error during creation
    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if (sockfd < 0)
        printf("Error:Creating socket at client");

    //Get 2nd argument i.e server to connect with
    server = gethostbyname(argv[1]);
    if (server == NULL) {
        printf("Error:No such host\n");
        exit(1);
    }
    //Zeroying out the buffer
    bzero((char *) &serv_addr, sizeof(serv_addr));

    //Host byte to network byte
    serv_addr.sin_family = AF_INET;
    bcopy((char *)server->h_addr,
         (char *)&serv_addr.sin_addr.s_addr,
         server->h_length);
    //Get the port no from command line
    portno = atoi(argv[2]);
    serv_addr.sin_port = htons(portno);

    //Connect to server
    if (connect(sockfd,(struct sockaddr *) &serv_addr,sizeof(serv_addr)) < 0)
        printf("Error: in connecting to server");
    interval = atof(argv[3]);
    /*printf("Interval is:%f\n",interval);*/
    strcpy(filename,argv[4]);
    /*printf("File is:%s",filename);*/
    fp=fopen(argv[4],"r");
    if(fp == NULL)
        printf("Error in opening the file");
    // Counting total no. of requests to process
    while (fgets(line,256,fp)) {
                data = strtok(line," ");
                rec[reccount].timestamp = atoi(data);
                /*printf("%d\n",rec[reccount].timestamp);*/
                reccount++;
      }
    /* Close file */
    rewind(fp);
    //Sending total no. of requests to server and receive response
    sprintf(buffer,"%d",reccount);
    /*printf("The no. of lines read %d \n",reccount);*/
    n = write(sockfd,buffer,strlen(buffer));
    if (n < 0)
        printf("Error: in writing at client end");
    bzero(buffer,256);
    n = read(sockfd,buffer,255);
    if (n < 0)
        printf("Error:in reading at client end");
    /*Done with sending no. of requests and receiving ACK*/
    double time_per_trn[reccount];
    while(!feof(fp))
    {
        bzero(buffer,256);
        fgets(buffer,255,fp);
        printf("The transaction request:%s\n",buffer);
        n = write(sockfd,buffer,strlen(buffer));
        start = clock();
        /*printf("Start time is:%f\n",start);*/

        if (n < 0)
        printf("Error: in writing at client end");
        bzero(buffer,256);
        n = read(sockfd,buffer,255);
        end=clock();
        /*printf("End time is:%f\n",end);*/
        duration = (double)(end-start) / CLOCKS_PER_SEC;
        time_per_trn[recsent] = duration;
        /*printf("Duration is:%f miliseconds\n",time_per_trn[recsent]);*/
        if (n < 0)
        printf("Error:in reading at client end");
        printf("%s\n",buffer); //Receiving ACK from the server
        if(recsent<reccount-1)
        {
            waittime = ((rec[recsent+1].timestamp - rec[recsent].timestamp)) * interval;
            /*printf("Wait time:%d\n",waittime);*/
            sleep(waittime);
        }
        recsent++;
    }
    /*Calculating the time taken by each client per transaction*/
    for(int h=0;h<reccount;h++)
    {
        finaltime = finaltime + time_per_trn[h];
    }
    double avgtime = finaltime/reccount;
    printf("Avg time per transaction per client is:%f\n",avgtime);
    /*DOne with avg time per trn per client*/

   fptr = fopen("./log.txt", "a");
   if(fptr == NULL)
   {
      printf("Error!");
      exit(1);
   }
   fprintf(fptr,"Average transaction time per client:%f\n", avgtime);
   fclose(fptr);
    fclose(fp);
    close(sockfd);
    return 0;
}
