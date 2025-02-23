#include <iostream>
using namespace std;
#define max 10

int a[11] = {10, 14, 19, 26, 27, 31, 33, 35, 42, 44, 0};

int b[11];

void merge(int low, int mid, int high)
{

    int i = low;     // for left subarray
    int j = mid + 1; // for right subarray
    int k = 0;       // for temp array

    int temp[high-low +1];  

 while (i<=mid && j<=high)
 {
    if (arr[i]<= arr[j])
    {
        temp[k]=arr[i++];
    }
    else
    {
        temp[k] = arr[j++];
    }

    k++; 
 }


 while (i<=mid)
 {
  temp[k++]=arr[i++];
 }

 while (j<=high)
 {
  temp[k++]=arr[j++];
 }

 //copy sorted elements back to orginal

 for (int i = 0; i < =high; i++)
 {
    arr[i]=temp[i];
 }


 //function to implement merge sort

void sort(int low,int high)
{
    //recursively sort first half
    sort(low,high);

    //second hals
    sort(mid+1,high);


    //merg two halves

    merge(low,mid,high);

}
 



 
 



    while (i <= mid && j <= high) // continue until we exhuast one subarray
    {
        if (arr[i] <= arr[j]) // if left element is smaller ,copy to temp array
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++]; // else, copy right elment to temp array
    }

    while (i <= mid)
    {
        temp[k++] = arr[i++];
    }

    while (j <= high)
    {
        temp[k++] = arr[j++];
    }

    for (i = low, k = 0; i <= high; i++, k++)
    {
        arr[i] = temp[k];
    }
}

void mergeSort(int arr[], int low,int high)
{
    if(low<high)
    {
        
    }
}