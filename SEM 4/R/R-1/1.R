# Import lpSolve package
library(lpSolve)

# Set coefficients of the objective function
f.obj <- c(750,1000)
 
# Set matrix corresponding to coefficients of constraints by rows
# Do not consider the non-negative constraint; it is automatically assumed
f.con <- matrix(c(1, 1,
                  1, 2,
                  4, 3), nrow = 3, byrow = TRUE)

# Set unequality signs
f.dir <- c("<=",
           "<=",
           "<=")

# Set right hand side coefficients
f.rhs <- c(10000,
           15000,
           25000)

# Final value (z)
lp("max", f.obj, f.con, f.dir, f.rhs)

# Variables final values
lp("max", f.obj, f.con, f.dir, f.rhs)$solution
