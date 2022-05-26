#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <pthread.h>

struct records
{
    int account_num;
    char custname[10];
    int balance;

}rec[10];

void withdraw(int account,int amount);
void deposit(int account,int amount);
void *processrequests(void *);
void calculateinterest();
pthread_mutex_t mutex;
int reccount=0,numrequests=0,updatetime=0;
char buffer[256];


int main(int argc, char *argv[])
{

    int sockfd, newsockfd, portno,n;
    int *newsocket;
    socklen_t clilen;
    char line[256];
    char *data;
    char operation;
    struct sockaddr_in serv_addr, cli_addr;
    pthread_mutex_init(&mutex,NULL);
    FILE *fp=NULL;
    int i=0,clientcount=0;

    // argument count check
    if (argc < 2) {
       printf("Error: Less no. of arguments");
       exit(1);
    }
    fp = fopen("./Records.txt","r");
    if(fp == NULL)
        printf("Error in opening the file");

    while (fgets(line,256,fp))
    {

        data = strtok(line," ");
        rec[reccount].account_num = atoi(data);

        data = strtok(NULL," ");
        strcpy(rec[reccount].custname,data);

        data = strtok(NULL,"\n");
        rec[reccount].balance = atoi(data);

        reccount++;
    }
    /* Close file */
    fclose(fp);

    //Server first creates socket
    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    //Check if error in socket creation
    if (sockfd < 0)
        printf("Error:Creating socket at server");
    //Zeroying out the bufferaaaaazzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzza
    bzero((char *) &serv_addr, sizeof(serv_addr));
    //Host to network byte updater
    portno = atoi(argv[1]);
    serv_addr.sin_family = AF_INET;
    serv_addr.sin_addr.s_addr = INADDR_ANY;
    serv_addr.sin_port = htons(portno);

    //Bind the socket to port
    if (bind(sockfd, (struct sockaddr *) &serv_addr,sizeof(serv_addr)) < 0)
        printf("Error:in binding socket\n");

    //Listen to requests from cllient if any
    listen(sockfd,5);

    //accept the request from client if any and provide a new socket for further communication.

    clilen = sizeof(cli_addr);
    while(newsockfd = accept(sockfd,(struct sockaddr *) &cli_addr,&clilen))
    {
        clientcount++;
            printf("Client %d is connected\n",clientcount);
        if (newsockfd < 0)
            printf("Error: in accept");

        newsocket = (int *)malloc(1);
        *newsocket = newsockfd;
        pthread_t pid;
        if(pthread_create(&pid,NULL,processrequests,(void*)newsocket) < 0)
        {
            printf("Error in creating new thread");
            return 1;
        }

    }
    close(newsockfd);
    close(sockfd);
    return 0;
}

void *processrequests(void *sockfd)
{
    int account,amount,timestamp,pid;
    int nnsocket = *(int*)sockfd;
    int n=0,t=0;
    char operation;
    /*printf("inside process function\n");*/

    /*Read the count of no. of requests sent by the server*/
    bzero(buffer,256);
    //Read the data sent by the server
    n = read(nnsocket,buffer,255);
    if (n < 0)
        printf("Error:in reading at server end");
    int numrequests = atoi(buffer);
    n = write(nnsocket,"Server received all requests from client",30);
    /*Server received total no. of requests sent by the client*/

    for(t=0;t<numrequests;t++)
    {
        /*****Check if it is interval to update the balances****/
        //calculateinterest();
        /*********Read the transaction request sent by the server********/
        bzero(buffer,256);
        n = read(nnsocket,buffer,255);
        if (n < 0)
        printf("Error:in reading at server end");
        //Else print the request sent by the client
        sscanf(buffer, "%d %d %c %d", &timestamp,&account,&operation,&amount);
        printf("The request from client: %d %c %d\n",account,operation,amount);
        /*Check the operation requested in a transaction request*/
        if(operation=='w')
        withdraw(account,amount);
        else if(operation=='d')
        deposit(account,amount);
        /*Send the response to client*/
        n = write(nnsocket,"Server processsed transaction successfully",100);
        if(n < 0)
            printf("Error:in writing at server end");
    }
}
void withdraw(int account,int amount)
{

    for(int k=0;k<reccount;k++)
    {

        if(rec[k].account_num==account)
        {
            pthread_mutex_lock(&mutex);
            //sleep(3);
            printf("-------------------------------------------\n");
            printf("Original balance:%d\n",rec[k].balance);
            /*if((rec[k].balance - amount) <= 0)*/
            if(amount > rec[k].balance)
                printf("Insufficient balance,can't withdraw\n");
            else{
            printf("Account %d is locked for withdraw operation\n",account);
            rec[k].balance = rec[k].balance - amount;
            printf("Account %d is unlocked now\n",account);
            printf("%s withdrew %d New balance:%d\n",rec[k].custname,amount,rec[k].balance);
            printf("-------------------------------------------\n");
            }
            pthread_mutex_unlock(&mutex);
        }


    }

}

void deposit(int account,int amount)
{

    for(int k=0;k<reccount;k++)
    {

        if(rec[k].account_num==account)
        {
            printf("-------------------------------------------\n");
            printf("Original balance:%d\n",rec[k].balance);
            pthread_mutex_lock(&mutex);
            //sleep(3);
            printf("Account %d is locked for deposit operation\n",account);
            rec[k].balance = rec[k].balance + amount;
            pthread_mutex_unlock(&mutex);
            printf("Account %d is unlocked now\n",account);
            printf("%s deposited %d New balance:%d\n",rec[k].custname,amount,rec[k].balance);
            printf("-------------------------------------------\n");
        }


    }

}

void calculateinterest()
{

    updatetime++;
    int z=0,fixedrate=1.2;

      if(updatetime%5==0)
      {
        printf("*****Updating balances*******\n");
        for(z=0;z<reccount;z++)
        {
            printf("%d\n",rec[z].balance);
            rec[z].balance = rec[z].balance + ((rec[z].balance*fixedrate)/100);
            printf("Updated balance for account %d is:%d\n",rec[z].account_num,rec[z].balance);
        }
        printf("-------------------------------------------\n");
      }
}
