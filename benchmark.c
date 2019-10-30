#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//Code to sort various algorithms from the fastest to slowest for a user defined 1d array

int main(){
	int n;
	printf("Enter the total number of elements in the array");
	scanf("%d", &n);
	int arr[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}	
	int benchmark[7];
	
	startTime = (float)clock()/CLOCKS_PER_SEC;
	bubblesort(arr, n);
	endTime = (float)clock()/CLOCK_PER_SEC;
	benchmark[0] = endTime - startTime;
	printf("bubbleSort = %d\n", benchmark[0]);
	
	startTime = (float)clock()/CLOCKS_PER_SEC;
	sort(arr, n); //Insertion Sort
	endTime = (float)clock()/CLOCK_PER_SEC;
	benchmark[1] = endTime - startTime;
	printf("Insertion Sort = %d\n", benchmark[1]);
	
	startTime = (float)clock()/CLOCKS_PER_SEC;
	bucket_sort(arr, n); //Bucket Sort
	endTime = (float)clock()/CLOCK_PER_SEC;
	benchmark[2] = endTime - startTime;
	printf("Bucket Sort = %d\n", benchmark[2]);
	
	startTime = (float)clock()/CLOCKS_PER_SEC;
	HeapSort(arr, n);
	endTime = (float)clock()/CLOCK_PER_SEC;
	benchmark[3] = endTime - startTime;
	printf("Heap Sort = %d\n", benchmark[3]);
	
	startTime = (float)clock()/CLOCKS_PER_SEC;
	mergeSort(arr, n);
	endTime = (float)clock()/CLOCK_PER_SEC;
	benchmark[4] = endTime - startTime;
	printf("Merge Sort = %d\n", benchmark[4]);
	
	startTime = (float)clock()/CLOCKS_PER_SEC;
	quick_sort(arr, 0, n-1);
	endTime = (float)clock()/CLOCK_PER_SEC;
	benchmark[5] = endTime - startTime;
	printf("Quick Sort = %d\n", benchmark[5]);
	
	startTime = (float)clock()/CLOCKS_PER_SEC;
	selectionSort(arr, n); //Selection Sort. Named it different from the function as swap already exists 
	endTime = (float)clock()/CLOCK_PER_SEC;
	benchmark[6] = endTime - startTime;
	printf("Selection Sort = %d\n", benchmark[6]);


	for(int i = 0; i < 7; i++){
		printf("%d", benchmark[i]);
	}
	
	
	bubblesort(benchmark, 7);
	
	for(int i = 0; i < 8; i ++){
		 printf("%d", benchmark[i]);
	}

}
