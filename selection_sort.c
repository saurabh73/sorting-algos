#include <stdio.h>

void swap(long long int *a, long long int *b)
{
	long long int temp = *a;
	*a = *b;
	*b = temp;
}

void sort(long long int arr[], long long int n)
{
	long long int i, j, min;
	for (i = 0; i < n-1; i++)
	{
		min = i;
		for (j = i+1; j < n; j++)
		if (arr[j] < arr[min])
			min = j;
		swap(&arr[min], &arr[i]);
	}
}

void printArray(long long int arr[], long long int n)
{
	long long int i;
	for (i=0; i < n; i++)
		printf("%lld ", arr[i]);
	printf("\n");
}

int main()
{
	long long int arr[] = {215,211,74,217,212};
	long long int n = sizeof(arr)/sizeof(arr[0]);
	printf("Array before sorting : ");
	printArray(arr, n);
	sort(arr, n);
	printf("Array after sorting : ");
	printArray(arr, n);
	return 0;
}
