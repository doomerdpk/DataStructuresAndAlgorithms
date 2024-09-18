#include<bits/stdc++.h>
using namespace std;

bool rotateString(string& s,string& t){

     //Brute Approach:
     //find all the rotation of string and see if one of them matches with t

     //for being a rotated string, it must be of same size
     if(s.size()!=t.size())
     {
      return false;
     }

     for(int i=0;i<s.size();i++)
     {
      //substr(i): from i to n-1
      //substr(i,j): from i and till j elements from i
      string rstring=s.substr(i)+s.substr(0,i);

      if(rstring==t)
      {
        return true;
      }
     }

     return false;
		}

int main()
{
   string s = "abcde";
   string t = "cdeab";

   cout<<rotateString(s,t);

   return 0;   
}

