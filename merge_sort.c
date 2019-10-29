/*Merge Sort Code*/
#include <stdio.h>
 
void mergeSort(int [], int, int, int);
 
void partition(int arr[],int low,int high)
{
    int mid;
 
    if(low < high)
    {
        mid = (low + high) / 2;
        partition(arr, low, mid);
        partition(arr, mid + 1, high);
        mergeSort(arr, low, mid, high);
    }
    int k;
    printf("The sorted arr according to Merge Sort is :\n");

    for (k = 0; k < n; k++)
        printf("%d ", arr[k]);
    printf("\n");
}
 
void mergeSort(int arr[],int low,int mid,int high)
{
    int i, mi, k, lo, temp[50];
 
    lo = low;
    i = low;
    mi = mid + 1;
    while ((lo <= mid) && (mi <= high))
    {
        if (arr[lo] <= arr[mi])
        {
            temp[i] = arr[lo];
            lo++;
        }
        else
        {
            temp[i] = arr[mi];
            mi++;
        }
        i++;
    }
    if (lo > mid)
    {
        for (k = mi; k <= high; k++)
        {
            temp[i] = arr[k];
            i++;
        }
    }
    else
    {
        for (k = lo; k <= mid; k++)
        {
             temp[i] = arr[k];
             i++;
        }
    }
 
    for (k = low; k <= high; k++)
    {
        arr[k] = temp[k];
    }
}