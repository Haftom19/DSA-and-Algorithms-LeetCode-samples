#include <iostream>

using namespace std;

void targetSum(int arr, int size, int target)
{
    int i = 0;
    int j = size - 1;

    while (i < j)
    {
        int currentSum = arr[i] + arr[j];
        if (currentSum == target)
        {
            cout << "pairs found" << "(" <<arr[i]<<","<< arr[j]<<")"<< endl;
            return;
        }
        else if (currentSum < target)
        {
            i++;
        }
        else
        {
            j--;
        }
    }

    cout << "no pairs found" << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    int target = 6;

    targetSum(arr, size, target);

    return 0;
}