#include <stdio.h>

void sort(int arr[], int n)
{
	int i, key, j;
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

void printArray(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

int main()
{
	int arr[] = {215,211,74,217,212};
	int n = sizeof(arr) / sizeof(arr[0]);
    printf("Array before sorting : ");
    printArray(arr, n);
	sort(arr, n);
	printf("Array after sorting : ");
	printArray(arr, n);
	return 0;
}