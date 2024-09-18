#include<bits/stdc++.h>
using namespace std;

bool palindromeCheck(string& s){
      
      string copystr=s;

      reverse(s.begin(),s.end());

      return (s==copystr);
      
		}


int main()
{
   string s="deepak";

   cout<<palindromeCheck(s);

   return 0;   
}

