function Chessboard(n)
%Function creates a chessboard plot
%Input
%n  - size of chessboard, no. squares on each side (n*n board)
if rem(n,1) ~= 0 || n <= 0
    error('n must be a positive integer.');
end
hold off
colour=[0 0 0;1 1 1]; %Black and white colour mapping
if rem(n,2) %Creating an array of 1s and 0s
    a = ones(n);
    a(2:2:numel(a)) = 0;
else
    a = ones(n+1,n);
    a(2:2:numel(a)) = 0;
    a(n+1,:)=[];
end
imagesc(a) %Creates an image mapping of the matrix
colormap(colour) %Changes to black and white colour mapping
hold on
grid off
set(gca,'yticklabel',[],'xticklabel',[],'xtick',[],'ytick',[])
end