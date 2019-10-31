#include <stdio.h>
#include <stdlib.h>
#include "sorto.h"

int main()
{

	int choice = -1, length = 0, counter = 0, response = 0;
	int array[100];
	printf("***************************************\n");
	printf("*** WELCOME TO THE SORTING ALGORTIHMS ***\n");
	printf("***************************************\n\n\n");
	while (response == 0)
	{
		printf("The Sorting Algorithms that are here are:\n");
		printf("1. Bubble Sort\n");
		printf("2. Merge Sort\n");
		printf("3. Insertion Sort\n");
		printf("4. Heap Sort\n");
		printf("5. Quick Sort\n");
		printf("6. Selection Sort\n");
		printf("Enter the serial number of your choice of algorithm.\n");
		scanf("%d", &choice);

		while (choice > 6 || choice < 0)
		{
			printf("Enter the serial number of your choice of algorithm.\n");
			scanf("%d", &choice);
		}
		printf("Now enter the length of the array you want to sort(less than 100): \n");
		scanf("%d", &length);
		printf("Enter your array now:\n");
		for (counter = 0; counter < length; counter++)
		{
			scanf("%d", &array[counter]);
		}
		switch (choice)
		{
		case 1:
			bubble_sort(array, length);
			break;
		case 2:
			partition(array, 0, length - 1);
			break;
		case 3:
			insertion_sort(array, length);
			break;
		case 4:
			HeapSort(array, length);
			break;
		case 5:
			quick_sort(array, 0, length - 1);
			break;
		case 6:
			selection_sort(array, length);
			break;
		}
		printf("The sorted list accordingly is :\n");
		int c;
		for (c = 0; c < length; c++)
		{
			printf("%d  ", array[c]);
		}
		printf("\n");
		printf("Do you want to continue sorting another algorithm?\n");
		printf("Type 0 for YES\n\t OR \n  1 for NO\n");
		scanf("%d", &response);
		if (response == 1)
		{
			printf("The program is now exiting...\n");
		}
	}
	return 0;
}
