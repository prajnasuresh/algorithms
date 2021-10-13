# -*- coding: utf-8 -*-
"""
Created on Tue Aug 24 16:56:36 2021

@author: Abhishek
"""

def bubble(a):
    n = len(a)
    for i in range(0,n):
        for j in range(0,n-i-1):
            if(a[j]>a[j+1]):
                temp=a[j]
                a[j]=a[j+1]
                a[j+1]=temp
            
a = [5,1,4,2,8]
bubble(a)
print(a)