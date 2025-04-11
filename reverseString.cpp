#include <iostream>
#include <vector>
include<string>

    using namespace std;

string reverseString(string s)
{

    /*
    1. Trim leading and Trailing spaces
    2. Extract words manually
    3. Reverse the word order
    4. Reconstruct the string with the single spaces
    */

    vector<string> words; // a vector to store words
    int n = s.length();   // length of input string
    int i = 0;            // index to traverse the string

    while (i < n)         //loop through the string 
    {
        // skip leading spaces 
        while (i < n && s[i] == ' ')  
            i++;

        if (i >= n)
            break; // if we reach in the end stop
    }

int start=i;  //we will start traversing the first charcter after passing the empty spaces


while (i<n && s[i] !=' ') i++;

words.push_back(s.substr(start,i-start));


string result = "";

for (int j=words.size()-1; j>=0; j--)
{
    result+=words[j];
    if (j>0)
    {
        result+= " "; //add spaces between words
    }
    
}

return result;

}

int main()
{
    string s ="  the  sky is   blue  ";

    cout<<"reverse words for the string "<<reverseString(s)<<endl;

    return 0;
}




