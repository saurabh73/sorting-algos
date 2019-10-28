#include <stdio.h>

void sort(long long int arr[], long long int n)
{
	long long int i, key, j;
	for (i = 1; i < n; i++) {
		key = arr[i];
		j = i - 1;

		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}

void printArray(long long int arr[], long long int n)
{
	long long int i;
	for (i = 0; i < n; i++)
		printf("%lld ", arr[i]);
	printf("\n");
}

int main()
{
	long long int arr[] = {215,211,74,217,212};
	long long int n = sizeof(arr) / sizeof(arr[0]);
    printf("Array before sorting : ");
    printArray(arr, n);
	sort(arr, n);
	printf("Array after sorting : ");
	printArray(arr, n);
	return 0;
}
