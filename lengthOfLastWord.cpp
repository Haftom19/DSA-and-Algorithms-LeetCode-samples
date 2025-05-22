#include<iostream>
#include <string>

using namespace std;

int lengthOfLastWord(string s)
{

  int length=0; //for counting the length of the words
  int i=s.size()-1;

//ignoring trailing spaces

  while (i>=0 && s[i]== ' ')
  {
      i--;
  }
//count the length of  last word

  while (i>=0 && s[i]!= ' ')
  {
    length++;
    i--;
  }
  
  return length;
}

int main ()
{
    string s = " Hello World "; 

    cout<<"The length of the last word: "<<lengthOfLastWord(s)<<endl;

    return 0;

}