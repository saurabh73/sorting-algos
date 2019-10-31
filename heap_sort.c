#include<stdio.h>
#include "sorto.h"

void Swap( int *num_a, int *num_b ){
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
        Swap(&array[0], &array[i]);
        HeapAdjust(array, 0, i);
    }
}

