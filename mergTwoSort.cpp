#include <iostream>

using namespace std;

void mergeSort(int arr1[], int arr2[], int n, int m)
{

    int i = 0;
    int j = 0;
    int k = 0;

    int mergedArray[m + n];

    while (i < n && j < m)
    {

        if (arr1[i] < arr2[j])
        {
            mergedArray[k] = arr1[i];
            i++;
        }
        else
        {
            mergedArray[k] = arr2[j];
            j++;
        }

        k++;
    }
 //remaining elemnets in both sides

 while (i<n)
 {
    mergedArray[k]= arr2[j];
    i++;
    k++;
 }
 
 while (j<m)
 {
    mergedArray[k]= arr2[j];
    j++;
    k++;
 }


 //print the array

 cout<<"merged Array: ";

 for (int i = 0; i < m+n; i++)
 {
    cout<<mergedArray[i]<< " ";
 }

 cout<<endl;
 
}

int main ()
{
    int arr1 [] = {1,3,5,7}; 
    int arr2 [] = {2,4,6,8};

    int n=sizeof(arr1)/sizeof(arr1[0]);
    int m=sizeof(arr2)/sizeof(arr2[0]);

    mergeSort(arr1,arr2,n,m);

    return 0;
}
