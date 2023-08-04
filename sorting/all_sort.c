#include <stdio.h>

int arr[] = {5, 6, 3, 74, 34, 2, 4, 1, 87};
int n = sizeof(arr) / sizeof(int);

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubble()
{
    for (int j = 0; j < n - 1; j++)
    {
        for (int i = 0; i < n - 1 - j; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                swap(&arr[i], &arr[i + 1]);
            }
        }
    }
}

void insertion()
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i], j = i - 1;
        while (j >= 0 && temp < arr[j])
        {
            // printf("i=%d\ntmp=%d", arr[i],temp);
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
        // for (int k = 0; k < n; k++)?
        // {
        //     printf("%d, ", arr[k]);
        // }printf("\n");
        // }
    }
}

int partition(int low, int high)
{
    int pivot = arr[low];
    int i = low + 1, j = high;
    while (1)
    {
        while (i <= j && pivot > arr[i])
        {
            i++;
        }
        while (i <= j && pivot <= arr[j])
        {
            j--;
        }
        if (i < j)
        {
            swap(&arr[i], &arr[j]);
        }
        else if (j <= i)
        {
            break;
        }
        
    }
    swap(&arr[low], &arr[j]);
    return j;
}
void quick_sort(int low, int high)
{
    if (low < high)
    {
        int mid = partition(low, high);
        printf("\n%d\n", arr[mid]);
        quick_sort(low,mid-1);
        quick_sort(mid+1,high);

    }
}

int main()
{
    printf("before sorting:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", arr[i]);
    }
    // bubble();
    // insertion();
    // quick_sort(0, n - 1);

    printf("\nafter sorting:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", arr[i]);
    }

    return 0;
}
