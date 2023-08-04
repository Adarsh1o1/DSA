def second(arr):
    min=min1=-37687
    for i in  range(len(arr)):
        if arr[i]>min:
            min=arr[i]
    for i in range(len(arr)):
        if min>arr[i]>min1:
            min1=arr[i]
    return min1
arr=[1,2,4,5,67,8,99]
print(second(arr)) 