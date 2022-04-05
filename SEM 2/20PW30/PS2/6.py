# -*- coding: utf-8 -*-
"""
Created on Sun Feb 28 21:49:36 2021

@author: 20pw30
"""
import numpy as np
a=int(input("Enter the size of the square matrix"))
matrix=[]
for i in range(a):
    b=[]
    for j in range(a):
        b.append(int(input()))
    matrix.append(b)
        
print("your matrix is ")
for i in range(a): 
    for j in range(a): 
        print(matrix[i][j], end = " ") 
    print() 
matrix1=[]
print("The inverse matrix is ")
print(np.linalg.inv(matrix))