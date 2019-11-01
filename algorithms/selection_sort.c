#include <stdio.h>
#include "./../sort_algo.h"
#include "./../sort_common.h"

void selectionSort(int arr[], int n)
{
	int i, j, min;
	for (i = 0; i < n - 1; i++)
	{
		min = i;
		for (j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[min]) {
				min = j;
			}
				
		}
		swap(&arr[min], &arr[i]);
	}
}
