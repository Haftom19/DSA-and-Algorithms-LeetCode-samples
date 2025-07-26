#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool isPalindrome(string s)
{

    int left = 0;
    int right = s.size() - 1;

    while (left < right)
    {
        if (!isalnum(s[left]))
        {
            left++;
        }

        else if (!isalnum(s[right]))
        {
            right--;
        }

        else
        {
            if (tolower(s[left]) != tolower(s[right]))
            {
                return false;
            }

            left++;
            right--;
        }
    }

    return true;
}

int main ()
{
    string input = "A man, a plan, a canal:Panama";

    if (isPalindrome(input))
    {
        cout<<"Palindrome"<<endl;
    }
    else
    {
        cout<<"Not Fucking palindrome";
    }

    return 0;
    
}