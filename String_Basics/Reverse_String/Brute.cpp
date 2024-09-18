#include<bits/stdc++.h>
using namespace std;

vector<char> reverseString(vector<char>& s){
			
        stack<int> st;

        for(int i=0;i<s.size();i++)
        {
         st.push(s[i]);
        }

        for(int i=0;i<s.size();i++)
        {
         s[i]=st.top();
         st.pop();
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

