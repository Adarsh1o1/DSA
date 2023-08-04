def rotate(arr,k):
    n=len(arr)
    for i in range(k):
        temp1=arr[n-1]
        # print(temp1)
        j=0
        while j<n-1:
                arr[j-1]=arr[j]
                j+=1    
        arr[n-2]=temp1
    print(arr)


arr=[1,2,3,4,5,6]
# arr=[1, 3, 6, 11, 12, 17, 22 ,26, 30, 33, 38]
#     arr.append(arr[0])
# for i in range(1):
#     # arr[i+1]=arr[i]
#     arr[i-1]=arr[i]
# print(arr)
rotate(arr,7)

from os import *
from sys import *
from collections import *
from math import *

def rotate(n,arr,k):
    for i in range(k):
        temp1=arr[n-1]
        # print(temp1)
        j=0
        while j<n-1:
                arr[j-1]=arr[j]
                j+=1    
        arr[n-2]=temp1
    print(arr)
    
n=int(input("Enter size of array: ")) #size of array
arr=[] #array elements input
for i in range(n):
    num=int(input("Enter arraay elements"))
    arr.append(num)

k=int(input()) #no of times array has to be rotated

rotate(n,arr,k)