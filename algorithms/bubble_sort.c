#include <stdio.h>
#include "../sort_algo.h"

void bubbleSort(int array[], int n)
{
  int c, d, temp;
  for (c = 0; c < n; c++)
  {
    for (d = 0; d < n - c - 1; d++)
    {
      /* For decreasing order use < */
      if (array[d] > array[d + 1])
      {
        temp = array[d];
        array[d] = array[d + 1];
        array[d + 1] = temp;
      }
    }
  }
}
