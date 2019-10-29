#include <stdio.h>

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void selection_sort(int arr[], int n)
{
	int i, j, min;
	for (i = 0; i < n-1; i++)
	{
		min = i;
		for (j = i+1; j < n; j++)
		if (arr[j] < arr[min])
			min = j;
		swap(&arr[min], &arr[i]);
	}
	int k;
	printf("The sorted list according to Selection Sort is :\n");

	for (k = 0; k < n; k++)
		printf("%d ", arr[k]);
	printf("\n");
}

