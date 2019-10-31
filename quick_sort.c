#include<stdio.h>
#include "sorto.h"


int partitionQS(int[],int,int);
void swap( int *num_a, int *num_b ){
    int temp = *num_b;
    *num_b = *num_a;
    *num_a = temp;
}
 
void quick_sort(int a[], int l,int u)
{
	int j;
	if(l<u)
	{
		j=partitionQS(a,l,u);
		quick_sort(a,l,j-1);
		quick_sort(a,j+1,u);
	}
}
 
int partitionQS(int arr[], int low, int high) 
{ 
    int pivot = arr[high];    // pivot 
    int i = (low - 1);  // Index of smaller element 
  
    for (int j = low; j <= high- 1; j++) 
    { 
        // If current element is smaller than the pivot 
        if (arr[j] < pivot) 
        { 
            i++;    // increment index of smaller element 
            swap(&arr[i], &arr[j]); 
        } 
    } 
    swap(&arr[i + 1], &arr[high]); 
    return (i + 1); 
} 

