#include <iostream>
#include <vector>
using namespace std;

int removeElement(vector<int> &nums, int val)
{
    int k = 0; // counts the non-val elements
    int i = 0; // for iteration the nums array

    while (i < nums.size())
    {
        if (nums[i] != val)
        {
            nums[k] = nums[i];
            k++;
        }
        i++;
    }
    return k;
}

int main()
{
    vector<int> nums = {3, 2, 2, 3};
    int val = 3;

    int newElements = removeElement(nums, val);

    cout << "the new elements of the array" << newElements << endl;
    cout << "Modified array: ";

    for (int i = 0; i < newElements; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}