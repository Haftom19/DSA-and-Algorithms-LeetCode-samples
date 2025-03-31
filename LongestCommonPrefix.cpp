#include <iostream>
#include <string>
#include <vector>

using namespace std;

string longestCommonPrefix(vector<string> &strs)
{
    if (strs.empty())
    {
        return "";  //return empty
    }

    string prefix = strs[0];
    

    for (int i = 1; i < strs.size(); i++)
    {
        int j=0;

        while (j<prefix.size() && j<strs.size() && prefix[j] == strs[i][j])
        {
            j++; 
        }

        prefix = prefix.substr(0,j);  //keeping the common part 

        //manually build

        /*
        
           string temp = "";

           for(int k=0; k<j; k++)
           {
           temp+=prefix[k];
           }

           prefix=temp;

        */

        if (prefix.empty())
        {
            break;     //if no common stop early
        }
    
    }

    return prefix;
}

int main()
{
    vector<string> strs = {"flower","flow","flight"};

    cout<<"Longest common prefix: "<<longestCommonPrefix(strs);

    return 0;
    
}