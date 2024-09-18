#include<bits/stdc++.h>
using namespace std;

 vector<char> reverseString(vector<char>& s){
		
        int n=s.size();
        int low=0;
        int high=n-1;

        while(low<high)
        {
         swap(s[low],s[high]);
         low++;
         high--;
        }
        return s;
    }


int main()
{
   vector<char> s={'h', 'e' ,'l' ,'l' ,'o'};

   vector<char> ans=reverseString(s);

   for(auto it:ans)
   {
      cout<<it<<" ";
   }

   return 0;   
}

