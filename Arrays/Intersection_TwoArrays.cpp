#include<bits/stdc++.h>
using namespace std;

vector<int> IntersectionTwoArrays(int arr1[],int arr2[2], int n, int m)
{
  
  vector<int> ans;

  int i=0;
  int j=0;
  
  while(i<n && j<m)
  {
      if(arr1[i]<arr2[j])
  {
    i++;
  }
  if(arr1[i]>arr2[j])
  {
    j++;
  }
  if(arr1[i]==arr2[j])
  {
    ans.push_back(arr1[i]);
    i++;
    j++;
  }
  }

  return ans;
}

int main()
{
    int n, m;
    cin>>n>>m;

    int arr1[n];
    int arr2[m];

    for(int i=0;i<n;i++) cin>>arr1[i];
    for(int i=0;i<m;i++) cin>>arr2[i];

    vector<int> ans=IntersectionTwoArrays(arr1,arr2,n,m);

    for(auto it: ans)
    {
      cout<<it<<" ";
    }

    return 0;   
}