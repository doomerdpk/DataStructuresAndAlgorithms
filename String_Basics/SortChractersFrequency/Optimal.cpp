#include<bits/stdc++.h>
using namespace std;



vector<char> frequencySort(string& s){
		    unordered_map<char,int> mpp;

          for(int i=0;i<s.size();i++)
          {
             mpp[s[i]]++;
          }

          vector<pair<char,int>> temp(mpp.begin(),mpp.end());

          sort(temp.begin(),temp.end(),
          [](pair<char,int> p1, pair<char,int> p2)
{
   if(p1.second==p2.second)
   {
      return p1.first<p2.first;
   }
   return p1.second>p2.second;
});

          vector<char> ans;

          for(auto it: temp)
          {
            ans.push_back(it.first);
          }

          return ans;

		}

int main()
{
    string s="bbccddaaa";

    vector<char> ans=frequencySort(s);

    for(auto it:ans)
    {
      cout<<it<<" ";
    }

   return 0;   
}

