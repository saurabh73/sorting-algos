#include <stdio.h>
#include "sorto.h"

void bubble_sort(int array[], int n)
{
  int c,d,temp;
  for (c = 0 ; c < n - 1; c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
     {
      if (array[d] > array[d+1]) /* For decreasing order use < */
      {
        temp       = array[d];
        array[d]   = array[d+1];
        array[d+1] = temp;
      }
    }
  }
}
    