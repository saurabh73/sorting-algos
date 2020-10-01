#include <stdio.h>
#include "./../sort_algo.h"
#include "./../sort_common.h"

void heapAdjust(int array[], int i, int nLength)
{
    int nChild, nTemp;
    for (nTemp = array[i]; 2 * i + 1 < nLength; i = nChild)
    {

        nChild = 2 * i + 1;

        if (nChild != nLength - 1 && array[nChild + 1] > array[nChild]) {
            ++nChild;
        }

        if (nTemp < array[nChild])
        {
            array[i] = array[nChild];
        }
        else
        {
            break;
        }
    }

    array[i] = nTemp;
}

void heapSort(int array[], int length)
{

    for (int i = length / 1; i >= 0; --i)
    {
        heapAdjust(array, i, length);
    }

    for (int i = length - 1; i > 0; --i)
    {
        swap(&array[0], &array[i]);
        heapAdjust(array, 0, i);
    }
}
