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
        if (scanf("%d", &n) > 0)
        {
            if (n <= 0 || n >= INT_MAX)
            {
                printf("Invalid array size, try again?\n");
            }
        }
        else
        {
            printf("You did not enter any number.\n");
        }
    } while (n <= 0 || n >= INT_MAX);
    return n;
}

void read_array(int arr[], int n)
{
    printf("Enter array to sort:\n");
    for (int i = 0; i < n; i++)
    {
        if (scanf("%d", &arr[i]) <= 0)
        {
            printf("You did not enter any number.\n");
        }
    }
}