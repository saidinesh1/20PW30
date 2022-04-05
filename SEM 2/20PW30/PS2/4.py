# -*- coding: utf-8 -*-
"""
Created on Sun Feb 28 21:46:40 2021

@author: 20pw30
"""

for i in range (1,100):
    for j in range(1,100):
        for k in range(1,100):
            if i**2+j**2==k**2 : 
                print(i,j,k)