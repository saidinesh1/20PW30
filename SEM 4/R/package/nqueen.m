% N QUEENS PUZZLE
% SETUP
chess=input('Size of Chessboard/No. Queens :'); %Size of chessboard (number of queens)
if chess <4 %Problem unsolvable for size below 4
    error('Board must be minimum size of 4');
end
Chessboard(chess); %Creates the chessboard
M=1; %Loop setup
%Orientation of the board is weird so diagonals are strange
DR=[1 1]; %Down-right
DL=[-1 1]; %Down-left
UR=[1 -1]; %Up-right
UL=[-1 -1]; %Up-left
icon=char(9819); %Queen character for the plot
% LOOPS
while M<2
    %Setup which neesd to be done for each restart
    Restart=0;
    rows=1:chess;
    cols=1:chess;
    QR=zeros(1,chess); %Rows of queens
    QC=zeros(1,chess); %Columns of queens
    QP=zeros(chess,2); %Positions of queens
    
    %Loop for the placing of the queens
    for n=1:chess
        %Row placement
        xpos=randi(length(rows));
        QR(n)=rows(xpos);
        rows(rows==QR(n))=[]; %Removing the chosen column from future placements
        %Column placement
        ypos=randi(length(cols));
        QC(n)=cols(ypos);
        cols(cols==QC(n))=[]; %Removing the chosen row from future placements
    end
    
    QP(:,1)=QR; %Position array, x coordinates
    QP(:,2)=QC; %Position array, y coordinates
    
    %Loop for checking diagonals
    for N=1:chess
        for m=1:chess
            for c=1:chess
                if QP(c,:)+N*DR==QP(m,:)| QP(c,:)+N*DL==QP(m,:)| QP(c,:)+N*UR==QP(m,:)| QP(c,:)+N*UL==QP(m,:) %#ok<OR2>
                    Restart=1;
                end
            end
        end
    end
    
    if Restart==0
        M=2; %Lets the loop finish
    end
end
% PLOTTING
text(QR,QC,icon,'Color',[0.522,0.376,0.702],'FontSize', 200/chess,'HorizontalAlignment','Center') %Font size scaling found to be suitable