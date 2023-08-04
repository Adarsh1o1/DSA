from array import *
import time,os
def show_bars(arr):
    for i in arr:
        print(i*"|"," ",i,sep="",end="\n")
    print("\n")

def bubble_sort(arr):
    # print(arr)
    n=len(arr)
    # print(n)
    for j in range(n):
        for i in range(n-1-j):
            if arr[i]>arr[i+1]:
                arr[i],arr[i+1]=arr[i+1],arr[i]
                os.system('cls')
                show_bars(arr)
                time.sleep(2)

def selection_sort(arr):
    n=len(arr)
    print(n)
    for i in range(0,n):
        min = i
        for j in range(i+1,n):
            # print(arr,j)
            # print("selection sort")
            os.system('cls')
            show_bars(arr)
            time.sleep(2)
            if arr[min]>arr[j]:
                # print(arr)
                min=j
        if min!=i:
            arr[i],arr[min]=arr[min],arr[i]    
            os.system('cls')
            show_bars(arr)
            time.sleep(2)
    
def insertion_sort(arr):
    n=len(arr)
    for i in range(1,n):
        temp=arr[i]
        j=i-1
        while j>=0 and arr[j]>temp:
            arr[j+1]=arr[j]
            j-=1
            os.system('cls')
            show_bars(arr)
            time.sleep(2)
        arr[j+1]=temp
        print(arr)
        os.system('cls')
        show_bars(arr)
        time.sleep(2)
    # return list

def quick_sort(arr,i,j):

    def partition(arr,low,high):
        # print(low, high)
        pivot=arr[low]
        i=low+1
        j=high
        while True:
                # print(arr)
                # print(arr)
                while i<=j and arr[i]<pivot:
                    i+=1
                while i<=j and arr[j]>=pivot:
                    j-=1
                if j>i:
                    arr[i],arr[j]=arr[j],arr[i]
                    os.system('cls')
                    show_bars(arr)
                    time.sleep(2)
                    print(arr)
                elif j<=i:
                    # print('h')
                    # print(arr)
                    # os.system('cls')
                    # show_bars(arr)
                    # time.sleep(2)
                    break
        arr[j],arr[low]=arr[low],arr[j]
        os.system('cls')
        show_bars(arr)
        time.sleep(2)
        # print(i,j,"l")
        return j
    if i<j:
        # print(arr)
        p=partition(arr,i,j)
        # print("p=",p,"i=",i,"j=",j,arr)
        quick_sort(arr,i,p-1)
        quick_sort(arr,p+1,j)
    return arr

def quick_sort2(arr):
    if len(arr) <= 1:
        return arr
    else:
        pivot = arr[0]
        left = []
        right = []
        for i in range(1, len(arr)):
            if arr[i] < pivot:
                left.append(arr[i])
            else:
                right.append(arr[i])
        return quick_sort2(left) + [pivot] + quick_sort2(right)
# print(quick_sort2(list))

def merge_sort(arr):
    def merge_sorted_arr(a,b,arr):
        i=j=k=0
        while i<len(a) and j<len(b):
            # print(i,len(a))
            if a[i]<b[j]:
                # list.append(a[i])
                # print(k)
                # print(k,arr[k])
                arr[k]=a[i]
                # print(arr)
                i+=1            
            else:
                # list.append(b[j])
                arr[k]=b[j]
                # print(arr)
                j+=1
            k+=1
            # print(arr,'h')
        while i<len(a):
            # list.append(a[i])
            arr[k]=a[i]
            # print(arr)
            i+=1
            k+=1
        while j<len(b):
            # list.append(b[j])
            arr[k]=b[j]
            # print(arr)
            j+=1
            k+=1
        # print(arr)
    if len(arr)<=1:
        # print(arr,end='\t')
        return
    else:
        # print(arr)
        a=arr[:len(arr)//2]
        print(a,end='\t')
        b=arr[len(arr)//2:]
        print(b)
        merge_sort(a)
        print(a,end='\t')
        merge_sort(b)
        print('\n',b,sep='')
        merge_sorted_arr(a,b,arr)
        print(a,b,sep='\t')

list=[12,43,21,2,55,1]

# print(list)
# show_bars(list)
# bubble_sort(list)
# selection_sort(list)
# insertion_sort(list)
# quick_sort(list,0,len(list)-1)

print(list)
merge_sort(list)
print(list)
print("\t\t\t\t\tSorted!")