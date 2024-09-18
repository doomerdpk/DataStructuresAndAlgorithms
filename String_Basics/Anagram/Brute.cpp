#include<bits/stdc++.h>
using namespace std;

bool anagramStrings(string& s,string t){
			
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());

        return (s==t);
		}

int main()
{
   string s = "dog";
   string t = "cat";

   cout<<anagramStrings(s,t);

   return 0;   
}

