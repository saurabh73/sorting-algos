#include <stdio.h>
#include "../sort_algo.h"

// Shell sort
void shellSort(int array[], int n)
{
  // Rearrange elements at each n/2, n/4, n/8, ... intervals
  for (int interval = n / 2; interval > 0; interval /= 2)
  {
    for (int i = interval; i < n; i += 1)
    {
      int temp = array[i];
      int j;
      for (j = i; j >= interval && array[j - interval] > temp; j -= interval)
      {
        array[j] = array[j - interval];
      }
      array[j] = temp;
    }
  }
}