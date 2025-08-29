#include <iostream>
using namespace std;

int sumOddEven(int arr[], int n)
{

    int sumOdd = 0;

    int sumEven = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            sumEven += arr[i];
        }

        else
        {
            sumOdd += arr[i];
        }
    }

    return sumOdd - sumEven;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};

    int n = sizeof(arr) / sizeof(arr[0]);

    int result = sumOddEven(arr, n);

    cout << "The diff is: " << result << endl;

    return 0;
}