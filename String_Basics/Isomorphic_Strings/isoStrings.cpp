#include<bits/stdc++.h>
using namespace std;

bool isomorphicString(string s, string t) {
    	
    //Logic: Do Character by Chracter comaprison and Ensure.
    //No two characters are mapped to the same character.

    //String can contain any of the 256 ASCII characters
    int m1[256]={0};
    int m2[256]={0};

    int n=s.size();

    for(int i=0;i<n;i++)
    {
      //If not equal then the character is mapped to someone else.
      if(m1[s[i]]!=m2[t[i]]) 
      {
      return false;
      }

      m1[s[i]]=i+1;
      m2[t[i]]=i+1;
    }
    //If complete loop executes, if means characters are uniquely mapped
    //and the strings are isomorphic
    return true;
    }

int main()
{
   string s = "apple";
   string t = "bbnbm";

   cout<<isomorphicString(s,t);

   return 0;   
}

