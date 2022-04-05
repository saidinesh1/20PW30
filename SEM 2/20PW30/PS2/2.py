# -*- coding: utf-8 -*-
"""
Created on Sun Feb 28 21:23:51 2021

@author: 20pw30
"""
def distance():
    x1=int(input("enter x1 : "))

    x2=int(input("enter x2 : "))

    y1=int(input("enter y1 : "))

    y2=int(input("enter y2 : "))

    result= ((((x2 - x1 )**2) + ((y2-y1)**2) )**0.5)

    print("distance between",(x1,x2),"and",(y1,y2),"is : ",result)
distance()