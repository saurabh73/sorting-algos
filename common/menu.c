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
    if (choice==1)
        {
           printf("you selected bubble sort\n");
        int data[] = {-2, 45, 0, 11, -9};
  int size = sizeof(data) / sizeof(data[0]);
  bubbleSort(data, size);
  printf("Sorted Array in Ascending Order:\n");
  printArray(data, size);

            void bubbleSort(int array[], int size) {

  // run loops two times: one for walking throught the array
  // and the other for comparison
  for (int step = 0; step < size - 1; ++step) {
    for (int i = 0; i < size - step - 1; ++i) {
      
      // To sort in descending order, change">" to "<".
      if (array[i] > array[i + 1]) {
        
        // swap if greater is at the rear position
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
      }
    }
  }
}

// function to print the array
void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}



    return choice;
}
