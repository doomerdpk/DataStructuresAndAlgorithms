#include<bits/stdc++.h>
using namespace std;

bool anagramStrings(string& s,string t){

        if(s.size()!=t.size())
        {
         return false;
        }
			
        unordered_map<char,int> mpp1;

        for(int i=0;i<s.size();i++)
        {
         mpp1[s[i]]++;
        }

        unordered_map<char,int> mpp2;

        for(int i=0;i<t.size();i++)
        {
         mpp2[t[i]]++;
        }

        for(auto it:mpp2)
        {
         if(mpp1[it.first]!=it.second)
         {
            return false;
         }
        }

        return true;


		}

int main()
{
   string s = "eat";
   string t = "tea";

   cout<<anagramStrings(s,t);

   return 0;   
}

