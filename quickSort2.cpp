#include <iostream>
using namespace std;

#define MAX 7

void display(int arr[], int size)
{

    cout << " [ ";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "]\n";
}

// function to swap

void swap(int arr[], int nums1, int nums2)
{
    int temp = arr[nums1];
    arr[nums1] = arr[nums2];
    arr[nums2] = temp;
}

// loop to partion

int partition(int arr[], int low, int high)
{
    int pivot = arr[high]; 
    int i = low - 1; // leftpointer
    int j = high;    // rightpointer

    while (true)
    {
        while (arr[++i] < pivot)
        {
            // do nothing, increment i
        }

        while (j > low && arr[--j] > pivot)
        {
            // decrement j, do nothing
        }

        // if i and j crossed each other

        if (i >= j)
        {
            break;
        }

        else
        {
            // swap elements at i and j if they are in the wrong order

            cout << "item swapped : " << arr[i] << "," << arr[j] << endl;
            swap(arr, i, j);
        }
    }

    // finally swap the pivot with element at i

    cout << "item swapped : " << arr[i] << "," << arr[high] << endl;
    swap(arr, i, high);

    cout << "updated array :";
    display(arr, high + 1);

    // return partition index

    return i;
}

void quicksort(int arr, int low, int high)
{
    // if the array has has one or 0 elements, it is already sorted

    if (high - low <= 0)
    {
        return;
    }

    else
    {
        // partition

        int partitonPoint = partition(arr, low, high);

        quicksort(arr, low, partitonPoint - 1);
        quicksort(arr, partitonPoint + 1, high);
    }
}

int main()
{
    // Declare and initialize the array inside main
    int arr[MAX] = {4, 6, 3, 2, 1, 9, 7};

    // Print the input array
    cout << "Input Array: ";
    display(arr, MAX);

    // Call quickSort on the entire array
    quickSort(arr, 0, MAX - 1);

    // Print the sorted output array
    cout << "\nOutput Array: ";
    display(arr, MAX);

    return 0;
}