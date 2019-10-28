#include<stdio.h>
int main()
{
    int n,i,j,t;
    printf("enter the size of an array ");
    scanf("%d",&n);
    int A[n];
    printf("enter elements of the array \n");
    for(i=0;i<n;i++)
       {
        printf("enter element a %d :",i+1);
        scanf("%d",&A[i]);
       }
    int end=n-1;
    for(i=0;i<n/2;i++)
      {
       t=A[i];
       A[i]=A[end];
       A[end]=t;
       end--;
      }
    for(i=0;i<n;i++)
      {
       printf("%d ",A[i]);
      }
    return 0;
}