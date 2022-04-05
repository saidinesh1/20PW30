# -*- coding: utf-8 -*-
"""
Created on Sun Feb 28 22:05:43 2021

@author: 20pw30
"""

a=[1,5,9,13]
print("The list is",a)
if a[1]-a[0]==a[2]-a[1]:
    b=a[1]-a[0]
a.extend(a[3]+b)
print(a)

