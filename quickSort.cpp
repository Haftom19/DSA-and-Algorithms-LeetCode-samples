#include<iostream>
using namespace std;

//function to partion the array

int partition (int arr[],low,high)
{
    int pivot =arr[high];  //pivot choosed last element 
    int i=low-1;    //pointer for smaller element, it starts form -1->0->1----
    

    for (int j = low; j < high; j++)
    {
        if (arr[j] < pivot)  //if current element is smaller than pivot
        {
            i++;
            swap(arr[i],arr[j]);  
        }
        
    }

    swap(arr[i+1],arr[high]);

    return i+1;    //partition index 

}

void quickSort(int arr[], int low, int high)

{
    if(low<high)
    {
        int pivotIndex=partition(arr,low,high); //get partion index
        quickSort(arr,low,pivotIndex-1);
        quickSort(arr,pivotIndex+1, high);  //sort recursively
    }

}

void printArray (int arr[],size)
{
   for (int i = 0; i < size; i++)
   {
    cout<<arr[i]<<" " <<endl;
   }
   
}

int main ()
{
    int arr []= {3,8,2,5,1,4,7,6};
    int n =sizeof(arr)/sizeof(arr[0]);
}
