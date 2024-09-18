#include<bits/stdc++.h>
using namespace std;

string FindSubstr(vector<string>& str,string subs)
{
   string ans;
   for(int i=0;i<str.size();i++)
   {
      if(str[i].find(subs)!=string::npos)
      {
         continue;
      }
      else
      {
         ans="";
         return ans;
      }
   }

   ans=subs;

   return ans;
}

int leastSizeString(vector<string> str)
{
   int min_size=INT_MAX;

   int index=-1;

   for(int i=0;i<str.size();i++)
   {
      if(str[i].size()<min_size)
      {
         min_size=str[i].size();
         index=i;
      }
   }

   return index;
}

string longestCommonPrefix(vector<string>& str){
			    
         string ans="";

         int idx=leastSizeString(str);

         string temp=str[idx];

         int n=temp.size();

         int max_size=INT_MIN;

         for(int i=0;i<n;i++)
         {
            for(int j=i;j<n;j++)
            {
               string subs=temp.substr(i,j-i+1);

               string tans=FindSubstr(str,subs);

               int n=tans.size();

               if(n>max_size)
               {
                  max_size=n;
                  ans=tans;
               }
            }
         }

         return ans;
		}

int main()
{
    vector<string> str= {"dog" , "cat" , "animal", "monkey" };
   
    cout<<longestCommonPrefix(str);
   
   return 0;   
}

