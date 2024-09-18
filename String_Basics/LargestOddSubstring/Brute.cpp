#include<bits/stdc++.h>
using namespace std;

string greaterString(string s1,string s2)
{
   string ans;
   if(s1.size()==s2.size())
   {
      ans=(s1>s2)?s1:s2;
   }
   else
   {
      ans=s1.size()>s2.size()?s1:s2;
   }

   return ans;
}

string largeOddNum(string& s){
        
       int n=s.size();
       
       string ans="";

       for(int i=0;i<n;i++)
       {
         for(int j=i;j<n;j++)
         {
            string str=s.substr(i,j-i+1);
            char ch=str[str.size()-1];
            int n=ch-'0';
            if(n%2!=0 && str[0]!='0')
            {
               ans=greaterString(ans,str);
            }
         }
       }

       return ans;
    }

int main()
{
   string s="0032579";

   string ans=largeOddNum(s);

   cout<<ans;

   return 0;   
}

