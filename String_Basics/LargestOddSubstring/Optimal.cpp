#include<bits/stdc++.h>
using namespace std;


string largeOddNum(string& s){
        
      //Optimal Logic:
      //Traverse the string in last element to first element direction
      //Find the first odd character from last. From Start(excluding zeros)
      //to that character will be your ans

      int n=s.size();

      int index1=-1;

      string ans="";

      for(int i=n-1;i>=0;i--)
      {
         if((s[i]-'0')%2==1)
         {
             index1=i;
             break;
         }
      }

      int index2=-1;
      
      for(int i=0;i<n;i++)
      {
         if((s[i]-'0')!=0)
         {
            index2=i;
            break;
         }
      }

      ans=s.substr(index2,index1-index2+1);

      return ans;
    }

int main()
{
   string s="2043321819";

   string ans=largeOddNum(s);

   cout<<ans;

   return 0;   
}

