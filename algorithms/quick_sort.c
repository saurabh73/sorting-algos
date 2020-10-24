#include <stdio.h>
#include "./../sort_algo.h"
#include "./../sort_common.h"

int partitionQS(int arr[], int low, int high)
{
    int pivot = arr[high]; // pivot
    int i = (low - 1);     // Index of smaller element

    for (int j = low; j <= high - 1; j++)
    {
        // If current element is smaller than the pivot
        if (arr[j] < pivot)
        {
            i++; // increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int a[], int l, int u)
{
    int j;
    if (l < u)
    {
        j = partitionQS(a, l, u);
        quickSort(a, l, j - 1);
        quickSort(a, j + 1, u);
    }
}