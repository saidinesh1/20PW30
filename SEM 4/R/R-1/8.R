f.obj<-c(5,4,3,2,1)
f.con<-matrix(c(1,0,0,0,0,
		    1,2,0,0,0,
		    3,-1,-1,0,0,
		    3,3,-1,-1,0,
		    3,3,3,-1,-1,
		    1,1,1,1,1),nrow=6,byrow=TRUE)

),nrow=4,byrow=TRUE)
f.dir<-c("<=","<=",">=",">=",">=","=")
f.rhs<-c(60,6,15,180,300,150)
lp("min",f.obj,f.con,f.dir,f.rhs)
lp("min",f.obj,f.con,f.dir,f.rhs)$solution
