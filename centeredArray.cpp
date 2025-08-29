#include <iostream>
using namespace std;

int centeredArray(int arr[], int n)
{

    if (arr == nullptr || (n % 2) == 0)
    {
        return 0;
    }

    int center_index = n / 2;
    int mid_value = arr[center_index];

    for (int i = 0; i < n; i++)
    {
        if (i != center_index && arr[i] <= mid_value)
        {
            return 0;
        }
    }

    return 1;
}

int main ()
{

    int arr [] ={2,3,1,4,5};

    int n = sizeof(arr)/sizeof(arr[0]);

    int result=centeredArray(arr,n);

    cout<<result<<endl;
    
    return 0;
}
