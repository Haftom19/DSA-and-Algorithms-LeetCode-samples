#include <iostream>
#include<vector>
using namespace std;

int removeDuplicates(vector<int> &nums)
{

    if (nums.empty())
    {
        return 0;
    }

    int i = 1;
    int j = 1;

    while (i < nums.size())
    {
        if (nums[i] != nums[i - 1]) //check if unique
        {
            nums[j] = nums[i];   //place unique element
            j++;
        }
        i++;     
    }
    return j;
}

int main()
{
    vector<int> nums = {1,2,3,3,4,5,5,6};

    int newSize = removeDuplicates(nums);

    cout<<"new size element :"<<newSize<<endl;

    cout<<"Modified array: ";

    for (int i = 0; i < newSize; i++)
    {
        cout<<nums[i]<<" ";
    }

    cout<<endl;

    return 0;
    
}