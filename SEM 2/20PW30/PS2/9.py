# -*- coding: utf-8 -*-
"""
Created on Sun Feb 28 22:22:19 2021

@author: 20pw30
"""

def absolute(x):
    if x>0 :
        return x
    elif x<0:
        return -x
    
a=int(input("Enter the number"))
print(absolute(a))