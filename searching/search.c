#include <stdio.h>
int linear_search(int *arr,int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
            printf("%d", i);
        }
    }
    return -1;
}
int binary_search(int *arr, int low, int high, int key)
{
    int mid = 0;
    if (high >= low)
    {
        mid = (high + low) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            return binary_search(arr, low, mid, key);
        }
        else if (arr[mid] < key)
        {
            return binary_search(arr, mid + 1, high, key);
        }
    }
    else
    {
        return -1;
    }
}

int main()
{
    // by using linear search
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9}, num;
    int key = 9;
    int n=sizeof(arr) / sizeof(int);
    // printf("%d",sizeof(arr) / sizeof(int));
    num = linear_search(arr,n, key);
    // printf("%d",num);
    if (num != -1)
    {
        printf("by using linear search\nElement found at index %d\n", num);
    }
    else
    {
        printf("by using linear search\nElement not found\n");
    }



    // by using binary search
    int arr1[] = {1, 2, 4, 5, 8, 9, 79, 88, 89}, low, high, key1 = 89, n1;
    n1 = sizeof(arr1) / sizeof(arr1[0]);
    low = 0;
    high = n1 - 1;
    // printf("%d, %d,%d ",n,low,high);
    int item = binary_search(arr1, low, high, key1);
    if (item != -1)
    {
        printf("by using binary search\n%d found at index %d\n", key1, item);
    }
    else
    {
        printf("by using binary search\n%ditem not found\n");
    }
    return 0;
}
