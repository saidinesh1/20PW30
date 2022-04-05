# -*- coding: utf-8 -*-
"""
Created on Sun Feb 28 22:32:21 2021

@author: 20pw30
"""

a=[2,4,6,8,10]
amin,amax=min(a),max(a)
print(amin,amax)
for i, val in enumerate(a):
    a[i] = (val-amin) / (amax-amin)
print(a)  
