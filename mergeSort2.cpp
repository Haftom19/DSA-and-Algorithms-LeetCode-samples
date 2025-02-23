#include <iostream.h>
using namespace std;
// function  to merge two sorted subarrays using seperate left and right arr
int a[10] = {};
void merging(int low, int mid, int high)
{
    int leSize = mid - low + 1;
    int reSize = high - mid;

    int left[leSize];
    int right[reSize];

    for (int i = 0; i < leSize; i++)
    {
        left[i] = a[low + i];
    }

    for (int j = 0; j < reSize; j++)
    {
        right[j] = a[mid + 1 + j]
    }

    int i = 0, j = 0;
    , k = 0;

    // compare elements from left and right and place the samller element in a[]
    while ()
    {
        if (left[i] <= right[j])
        {
            a[k] = left[i];
            i++;
        }
        else
        {
            a[k] = right[j];
            j++;
        }
        k++;
    }

    // remaining elements

    while (i < leSize)
    {
        a[k] = left[i];
        i++;
        k++;
    }

    while (j < reSize)
    {
        a[k] = right[j];
        j++;
        k++;
    }

    // to implemnt mergesort

    void mergeSort(int low, int high)
    {
        if (low < high)
        {
            int mid = (low + high) / 2;

            // recursive sort first half

            mergesort(low, mid);

            mergesort(mid + 1, high);

            // merge them

            merging(low, mid, high);
        }
    }
}