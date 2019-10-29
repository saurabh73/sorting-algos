#include <stddef.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

bool is_sorted(int *arr, size_t n)
{
  size_t i = 1;

  if (n == 1)
    return (true);
  while (i < n && arr[i - 1] < arr[i]) {
    i += 1;
  }
  if (i == n)
    return (true);
  return (false);
}

void shuffle(int *array, size_t n)
{
  size_t i = 0;
  size_t j;
  int t;
  
  if (n > 1) {
    while (i < n - 1) {
      j = i + rand() / (RAND_MAX / (n - i) + 1);
      t = array[j];
      array[j] = array[i];
      array[i] = t;
      i += 1;
    }
  }
}

void stupid_sort(int *arr, size_t n)
{
  while (!is_sorted(arr, n)) {
    shuffle(arr, n);
  }
}

int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6, 7, -3};

  if (is_sorted(arr, 7))
    printf("ok\n");
  else
    printf("ko\n");
}
