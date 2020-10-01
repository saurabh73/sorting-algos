#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sort_algo.h"
#include "sort_common.h"
#define p printf(
#define s scanf(
#define f )
#define m printf("\n")

int main()
{

	// Welcome Message
	p"*******************************************\n" f;
	p"**** WELCOME TO THE SORTING ALGORTIHMS ****\n" f;
	p"*******************************************\n" f;
	m;

	// Read Input
	int n = read_size();
	int *arr;
	arr = (int *)malloc(sizeof(int) * n);
	read_array(arr, n);
	p"Array elements before sort\n" f;
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
			p"Array elements after copying\n" f;
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
			}
			// TODO: Detect Run Time Complexity

			// Display Results
			p"Array elements after sort\n" f;
			print_array(temp, n);
			free(temp);
		}

		// Re-Check response
		m;
		p"Do you want to continue sorting another algorithm?\n" f;
		p "Type 1 for YES OR 0 for NO\n" f;
		s"%d", &response f;
	} while (response == 1);

	// Free Memory
	free(arr);
	return 0;
}
