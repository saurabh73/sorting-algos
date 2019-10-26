// Sean Szumlanski
// COP 3502, Fall 2018
//
// bucket-sort.c
// =============
// Implementation of the bucket sort ("counting sort") that we saw in class.


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int *array, int i, int j)
{
	int temp = array[i]; array[i] = array[j]; array[j] = temp;
}

// Assumes array contains non-negative integers only.
void bucket_sort(unsigned int *array, int n)
{
	int i, j, max, *buckets;

	// Find max element in array.
	for (max = array[0], i = 1; i < n; i++)
		if (array[i] > max)
			max = array[i];

	buckets = calloc(max + 1, sizeof(int));

	for (i = 0; i < n; i++)
		buckets[array[i]]++;

	for (i = j = 0; i <= max; i++)
	{
		while (buckets[i] > 0)
		{
			array[j++] = i;
			--buckets[i];
		}
	}

	free(buckets);
}

void print_array(int *array, int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%d%c", array[i], (i == n - 1) ? '\n' : ' ');
}

int is_sorted(int *array, int n)
{
	int i;

	for (i = 0; i < n - 1; i++)
		if (array[i] > array[i + 1])
			return 0;

	return 1;
}

int main(int argc, char **argv)
{
	int i, n;
	unsigned int *array;
	srand(time(NULL));

	if (argc < 2)
	{
		fprintf(stderr, "Proper syntax: %s <n>\n", argv[0]);
		return 1;
	}

	n = atoi(argv[1]);
	array = malloc(sizeof(unsigned int) * n);

	for (i = 0; i < n; i++)
		array[i] = rand() % 1000 + 1;

	printf("\nUnsorted array:\n");
	print_array(array, n);

	bucket_sort(array, n);

	printf("\nSorted array:\n");
	print_array(array, n);

	printf("\n%s\n", is_sorted(array, n) ? "SORTED!" : "failwhale :(");

	// clean up after yourself
	free(array);

	return 0;
}
