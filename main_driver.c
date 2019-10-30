#include<stdio.h>
#include<stdlib.h>

void bubble_sort(int [], int);  // BubbleSort prototype
void partition(int [], int, int); // MergeSort prototype
void mergeSort(int [], int, int, int);
void insertion_sort(int [], int ); //InsertionSort prototype
void HeapSort(int [], int);
void quick_sort(int [],int ,int);
int partitionQS(int[],int,int);
void selection_sort(int [], int);


int main()
{

	int choice=-1,length=0,counter=0,response=0;
	int array[100];
	printf("***************************************\n");
	printf("***WELCOME TO THE SORTING ALGORTIHMS***\n");
	printf("***************************************\n\n\n");
	while(response == 0)
	{
		printf("The Sorting Algorithms that are here are:\n");
		printf(" 1. Bubble Sort\n");
		printf("2. Merge Sort\n");		
		printf("3. Insertion Sort\n");
		printf("4. Heap Sort\n");		
		printf("5. Quick Sort\n");	
		printf("6. Selection Sort\n");
		printf("Enter the serial number of your choice of algorithm.\n");
			scanf("%d", &choice);
		while(choice>6 || choice<0)
		{
			printf("Enter the serial number of your choice of algorithm.\n");
			scanf("%d", &choice);
		}
		printf("Now enter the length of the array you want to sort(less than 100): \n");
		scanf("%d", &length);
		printf("Enter your array now:\n");
		for(counter =0;counter<length;counter++)
		{
			scanf("%d", &array[counter]);
		}
		switch(choice)
		{
			case 1: bubble_sort(array, length);
					break;
			case 2: partition(array,0, length-1);
					break;
			case 3: insertion_sort(array, length);
					break;
			case 4: HeapSort(array, length);
					break;
			case 5: quick_sort(array,0, length-1);
					break;
			case 6: selection_sort(array, length);
					break;

		}
		printf("The sorted list accordingly is :\n");
		int c;
  		for (c = 0; c < length; c++)
   		{
    		printf("%d  ", array[c]);
   		}
   		printf("\n");
		printf("Do you want to continue sorting another algorithm?\n");
		printf("Type 0 for YES\n\t\t OR \n \t 1 for NO\n");
		scanf("%d", &response);
		if (response == 1)
		{
			printf("The program is now exiting...\n");
		}
	}
	return 0;
}

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

void partition(int arr[],int low,int high) // MergeSort
{
    int mid;
 
    if(low < high)
    {
        mid = (low + high) / 2;
        partition(arr, low, mid);
        partition(arr, mid + 1, high);
        mergeSort(arr, low, mid, high);
    }
}
 
void mergeSort(int arr[],int low,int mid,int high)
{
    int i, mi, k, lo, temp[50];
 
    lo = low;
    i = low;
    mi = mid + 1;
    while ((lo <= mid) && (mi <= high))
    {
        if (arr[lo] <= arr[mi])
        {
            temp[i] = arr[lo];
            lo++;
        }
        else
        {
            temp[i] = arr[mi];
            mi++;
        }
        i++;
    }
    if (lo > mid)
    {
        for (k = mi; k <= high; k++)
        {
            temp[i] = arr[k];
            i++;
        }
    }
    else
    {
        for (k = lo; k <= mid; k++)
        {
             temp[i] = arr[k];
             i++;
        }
    }
 
    for (k = low; k <= high; k++)
    {
        arr[k] = temp[k];
    }
}

void insertion_sort(int arr[], int n)
{
	int i, key, j;
	for (i = 1; i < n; i++) {
		key = arr[i];
		j = i - 1;

		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}

void swap( int *num_a, int *num_b ){
    int temp = *num_b;
    *num_b = *num_a;
    *num_a = temp;
}

void HeapAdjust(int array[], int i, int nLength){
    int nChild, nTemp;
    for (nTemp = array[i]; 2 * i + 1 < nLength; i = nChild){

        nChild = 2 * i + 1;

        if (nChild != nLength - 1 && array[nChild + 1] > array[nChild])
            ++nChild;

        if (nTemp < array[nChild]){
            array[i] = array[nChild];
        }
        else  {
            break;
        }
    }

    array[i] = nTemp;
}

void HeapSort(int array[], int length)
{

    for (int i = length / 2 - 1; i >= 0; --i){
        HeapAdjust(array, i, length);
    }

    for (int i = length - 1; i > 0; --i){
        swap(&array[0], &array[i]);
        HeapAdjust(array, 0, i);
    }
}

void quick_sort(int a[],int l,int u)
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

void selection_sort(int arr[], int n)
{
	int i, j, min;
	for (i = 0; i < n-1; i++)
	{
		min = i;
		for (j = i+1; j < n; j++)
		if (arr[j] < arr[min])
			min = j;
		swap(&arr[min], &arr[i]);
	}

}