#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "./../sort_common.h"
#define p printf(
#define s scanf(
#define f )
#define m printf("\n")

int read_size()
{
    int n = 0;
    do
    {
        p"Enter size of array:\n" f;
        s"%d", &n f;

        if (n <= 0 || n >= INT_MAX)
        {
            p"Invalid array size, try again?" f;
            m;
        }
    } while (n <= 0 || n >= INT_MAX);
    return n;
}

void read_array(int arr[], int n)
{
    p"Enter array to sort:\n" f;
    for (int i = 0; i < n; i++)
    {
        s"%d", &arr[i] f;
    }
}

// int main() {
//     int n = read_size();
//     int *arr;
//     arr = (int *)malloc(sizeof(int)*n);
//     read_array(arr, n);
//     print_array(arr, n);
//     free(arr);
//     m;
//     return 0;
// }
