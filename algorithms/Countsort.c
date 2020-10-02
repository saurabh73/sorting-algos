#include  <stdio.h>  
  
  /*  Counting sort function  */
  int  counting_sort(int a[], int k, int n)
  {
  int i, j;
  int b[15], c[100];
  for (i = 0; i <= k; i++)
  c[i] = 0;
  for (j = 1; j <= n; j++)
  c[a[j]] = c[a[j]] + 1;
  for (i = 1; i <= k; i++)
  c[i] = c[i] + c[i-1];
  for (j = n; j >= 1; j--)
  {
  b[c[a[j]]] = a[j];
  c[a[j]] = c[a[j]] - 1;
  }
  printf("The Sorted array is : ");
  for (i = 1; i <= n; i++)
  printf("%d,", b[i]);
  }
  int  main()
  {
  int n, k = 0, a[15], i;
  printf("Input number of elements:  ");
  scanf("%d", &n);
  printf("Input the array elements one  by one: \n");
  for (i = 1; i <= n; i++)
  {
  scanf("%d", &a[i]);
  if (a[i] > k) {
  k = a[i];
  }
  }
  counting_sort(a, k, n);
  printf("\n");
  return 0;
  }
