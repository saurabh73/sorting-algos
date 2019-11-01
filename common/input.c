#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "./../sort_common.h"

int read_size()
{
    int n = 0;
    do
    {
        printf("Enter size of array:\n");
        scanf("%d", &n);

        if (n <= 0 || n >= INT_MAX)
        {
            printf("Invalid array size, try again?\n");
        }
    } while (n <= 0 || n >= INT_MAX);
    return n;
}

void read_array(int arr[], int n)
{
    printf("Enter array to sort:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

// int main() {
//     int n = read_size();
//     int *arr;
//     arr = (int *)malloc(sizeof(int)*n);
//     read_array(arr, n);
//     print_array(arr, n);
//     free(arr);
//     return 0;
// }