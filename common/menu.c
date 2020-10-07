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
        printf("8. shell sort\n");
        printf("Enter your choice of algorithm.\n");

        scanf("%d", &choice);

        if (choice < 0 || choice > TOTAL_ALGOS)
        {
            printf("Wrong algorithm choice, try again?\n");
        }
    } while (choice < 0 || choice > TOTAL_ALGOS);
    if(choice==8)
        {
        printf("you selected shell sort")
            int data[] = {9, 8, 3, 7, 5, 6, 4, 1};
  int size = sizeof(data) / sizeof(data[0]);
  shellSort(data, size);
  printf("Sorted array: \n");
  printArray(data, size);
        void shellSort(int array[], int n) {
  // Rearrange elements at each n/2, n/4, n/8, ... intervals
  for (int interval = n / 2; interval > 0; interval /= 2) {
    for (int i = interval; i < n; i += 1) {
      int temp = array[i];
      int j;
      for (j = i; j >= interval && array[j - interval] > temp; j -= interval) {
        array[j] = array[j - interval];
      }
      array[j] = temp;
    }
  }
}

// Print an array
void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}
    }
          
    return choice;
}
