x = 10:0.1:22;
y=95000./x.^2;
xd=10:2:22;
yd=[950 640 460 340 250 180 140];
xlabel('DISTANCE (cm)')
ylabel('INTENSITY (lux)')
plot(x,y,'-','LineWidth',1.0)
title('Light Intensity as a Function of Distance','FontSize',14)
axis([8 24 0 1200])
text(14,700,'Comparison between theory and experiment.','EdgeColor','r','LineWidth',2)
hold on
plot(xd,yd,'--ro','linewidth',1.0,'markersize',10)
legend('Theory','Experiment')
hold off