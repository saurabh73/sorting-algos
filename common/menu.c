#include <stdio.h>
#include "./../sort_common.h"

#define TOTAL_ALGOS 7

int read_menu()
{
    int choice = -1;
    do
    {
        printf("\n\n");
        printf("Select sorting algorithm or 0 to benchmark all:\n");
        printf("1. Bubble Sort\n");
        printf("2. Insertion Sort\n");
        printf("3. Selection Sort\n");
        printf("4. Heap Sort\n");
        printf("5. Quick Sort\n");
        printf("6. Merge Sort\n");
        printf("7. Radix Sort\n");
    
        printf("Enter your choice of algorithm.\n");

        scanf("%d", &choice);

        if (choice < 0 || choice > TOTAL_ALGOS)
        {
            printf("Wrong algorithm choice, try again?\n");
        }
    } while (choice < 0 || choice > TOTAL_ALGOS);
    return choice;
}
