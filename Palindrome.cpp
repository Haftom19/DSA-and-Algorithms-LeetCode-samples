#include <iostream>
using namespace std;

bool isPalindrome(int arr[], int n)
{
    int i = 0;     // left pointer
    int j = n - 1; // right ponter

    while (i < j)
    {
        if (arr[i] != arr[j])
        {
            return false; // mismatch
        }

        i++;
        j--;

            return true;
        
    }
}

int main()
{

    int arr[] = {1, 2, 3, 2, 1};

    int size = sizeof(arr) / sizeof(arr[0]);

    if (isPalindrome(arr, size))
    {
        cout << "is palindrome" << endl;
    }
    else
    {
        cout << "not palindrome" << endl;
    }

    return 0;
}


/*

   void palindromeCheck(int arr[],int n)
   {
      int i=0;
      int j=n-1;

      while (i<j)
      {
        if (arr[i]!=arr[j])
        {
            cout<<"Not palindrome"<<endl;
       return; 
        }

        i++;
        j--;
        
    else

        cout<<"It is palindrome array"<<endl;
      }
      
   }


   int main() {
    int arr[] = {1, 2, 3, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    isPalindrome(arr, size); // Calls function but no return value

    return 0;
}
    */

