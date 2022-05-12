# Import lpSolve package
library(lpSolve)

# Set coefficients of the objective function
f.obj <- c(3,4)
 
# Set matrix corresponding to coefficients of constraints by rows
# Do not consider the non-negative constraint; it is automatically assumed
f.con <- matrix(c(4, 2,
                  2, 5)
                  ,nrow = 2, byrow = TRUE)

# Set unequality signs
f.dir <- c("<=",
           "<=")

# Set right hand side coefficients
f.rhs <- c(80,180)
         

# Final value (z)
lp("max", f.obj, f.con, f.dir, f.rhs)

# Variables final values
lp("max", f.obj, f.con, f.dir, f.rhs)$solution
