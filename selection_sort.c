#include <stdio.h>

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void sort(int arr[], int n)
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
}

void printArray(int arr[], int n)
{
	int i;
	for (i=0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

int main()
{
	int arr[] = {215,211,74,217,212};
	int n = sizeof(arr)/sizeof(arr[0]);
	printf("Array before sorting : ");
	printArray(arr, n);
	sort(arr, n);
	printf("Array after sorting : ");
	printArray(arr, n);
	return 0;
}