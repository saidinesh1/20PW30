# -*- coding: utf-8 -*-
"""
Created on Sun Feb 28 21:25:31 2021

@author: 20pw30
"""
import math

def vectorA():
    global a1,b1,c1
    a1=int(input("Enter the value of i"))
    b1=int(input("Enter the value of j"))
    c1=int(input("Enter the value of k"))
    
def vectorB():
    global a2,b2,c2
    a2=int(input("Enter the value of i"))
    b2=int(input("Enter the value of j"))
    c2=int(input("Enter the value of k"))
    
def distance():
    dist=math.sqrt((a2-a1)**2+(b2-b1)**2+(c2-c1)**2)
    print("The distance between two vectors is ",dist)
    
def cosine():
    x=(a1*a2)+(b1*b2)+(c1*c2)
    y=(math.sqrt(a1**2+b1**2+c1**2)/math.sqrt(a2**2+b2**2+c2**2))
    print(y)
    z=float(x/y)
    print(z)
    
vectorA()
vectorB()
distance()
cosine()    