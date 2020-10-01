#include <stdio.h>
#include "./../sort_common.h"
#define p printf(
#define f )
#define m printf("\n")

void print_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        p"%d ", arr[i] f;
    }
    m;
}
