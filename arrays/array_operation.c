#include <stdio.h>
int main()
{
    int arr[11] = {5, 6, 3, 5, 74, 34, 2, 4, 1, 87};
    int n = 10;
    n++;
    // printf("%d\n%d\n",n,arr[9]);
    int index=4, i, p;
    for (i = n-1; i >= index; i--)
    {
        // printf("%d\n",i);
        arr[i+1] = arr[i];
    }
    arr[index] = 41;
    for (p = 0; p < n; p++)
    {
        // printf("%d\n",p);
        printf("%d, ", arr[p]);
    }
    return 0;
}