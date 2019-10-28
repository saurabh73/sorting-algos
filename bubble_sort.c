    /* Bubble sort code */
     
    #include <stdio.h>
     
    int main()
    {
      long long int array[100], n, c, d, temp;
     
      printf("Enter number of elements\n");
      scanf("%lld", &n);
     
      printf("Enter %lld integers\n", n);
     
      for (c = 0; c < n; c++)
        scanf("%lld", &array[c]);
     
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
     
      printf("Sorted list in ascending order:\n");
     
      for (c = 0; c < n; c++) {
          printf("%lld\n", array[c]);
      }
        
      return 0;
    }
