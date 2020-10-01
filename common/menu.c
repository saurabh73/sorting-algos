#include <stdio.h>
#include "./../sort_common.h"
#define p printf(
#define s scanf(
#define f )
#define m printf("\n")

#define TOTAL_ALGOS 7

int read_menu()
{
    int choice = -1;
    do
    {
        p"\n\n"f;
        p"Select sorting algorithm or 0 to benchmark all:\n" f;
        p"1. Bubble Sort\n" f;
        p"2. Insertion Sort\n" f;
        p"3. Selection Sort\n" f;
        p"4. Heap Sort\n" f;
        p"5. Quick Sort\n" f;
        p"6. Merge Sort\n" f;
        p"7. Radix Sort\n" f;
    
        p"Enter your choice of algorithm.\n" f;
        s"%d", &choice f;

        if (choice < 0 || choice > TOTAL_ALGOS)
        {
            p"Wrong algorithm choice, try again?" f;
            m;
        }
    } while (choice < 0 || choice > TOTAL_ALGOS);
    return choice;
}
