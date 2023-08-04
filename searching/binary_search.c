#include <stdio.h>
int binary_search(int *arr, int low, int high, int key)
{
    // printf(".");
    int mid = 0;
    if (high >= low)
    {
        mid = (high + low) / 2;
        // printf("%d  ",mid);
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            return binary_search(arr, low, mid, key);
            // printf(".");
        }
        else if (arr[mid] < key)
        {
            return binary_search(arr, mid + 1, high, key);
        }
        
    }
    else {
            return -1;
        }
}
int main()
{
    int arr[] = {1, 2, 4, 5, 8, 9, 79, 88, 89}, low, high, key = 89, n;
    n = sizeof(arr) / sizeof(arr[0]);
    low = 0;
    high = n - 1;
    // printf("%d, %d,%d ",n,low,high);
    int item = binary_search(arr, low, high, key);
    if (item != -1)
    {
        printf("%d found at index %d", key, item);
    }
    else
    {
        printf("item not found");
    }
    return 0;
}
