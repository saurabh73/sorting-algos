#include <stdio.h>

void insertion_sort(int arr[], int n)
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

	int k;
	printf("The sorted list according to Insertion Sort is :\n");

	for (k = 0; k < n; k++)
		printf("%d ", arr[k]);
	printf("\n");
}
