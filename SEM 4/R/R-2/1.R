library(lpSolve)
f.obj<-c(2,3)
f.con<-matrix(c(2,3,
		    2,6),nrow=2,byrow=TRUE)
f.dir<-c("<=","<=")
f.rhs<-c(8,18)
optimum<-lp("max",f.obj,f.con,f.dir,f.rhs)
var_solution<-lp("max",f.obj,f.con,f.dir,f.rhs)$solution
opt<-optimum$objval
cat("Optimum value is ",opt)
cat("variables final value is ",var_solution[1],var_solution[2])
lp("max",f.obj,f.con,f.dir,f.rhs,compute.sens=TRUE)$duals

		     