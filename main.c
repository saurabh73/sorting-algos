#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sort_algo.h"
#include "sort_common.h"

int main()
{

	// Welcome Message
	printf("*******************************************\n");
	printf("**** WELCOME TO THE SORTING ALGORTIHMS ****\n");
	printf("*******************************************\n");
	printf("\n\n");

	// Read Input
	int n = read_size();
	int *arr;
	arr = (int *)malloc(sizeof(int) * n);
	read_array(arr, n);
	printf("Array elements before sort\n");
	print_array(arr, n);

	// Take Algorithm Choice
	int response = 0;
	do
	{
		int choice = read_menu();

		if (choice == 0)
		{
			//TODO: Benchmark all algorithms
		}
		else
		{
			// copy array before sorting
			int *temp;
			temp = (int *)malloc(sizeof(int) * n);
			memcpy(temp, arr, sizeof(int) * n);
			printf("Array elements after copying\n");
			print_array(temp, n);
			// Do sorting

			switch (choice)
			{
			case 1:
				bubbleSort(temp, n);
				break;
			case 2:
				insertionSort(temp, n);
				break;
			case 3:
				selectionSort(temp, n);
				break;
			case 4:
				heapSort(temp, n);
				break;
			case 5:
				mergeSort(temp, n);
				break;
			case 6:
				quickSort(temp, 0, n - 1);
				break;
			case 7:
				radixSort(temp, n);
				break;
                         case 8:
                                shellSort(temp, n);
                                break;

			}
			// TODO: Detect Run Time Complexity

			// Display Results
			printf("Array elements after sort\n");
			print_array(temp, n);
			free(temp);
		}

		// Re-Check response
		printf("\n\n");
		printf("Do you want to continue sorting another algorithm?\n");
		printf("Type 1 for YES OR 0 for NO\n");
		scanf("%d", &response);
	} while (response == 1);

	// Free Memory
	free(arr);
	return 0;
}
