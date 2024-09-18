#include<bits/stdc++.h>
using namespace std;


vector<int> findPeakGrid(vector<vector<int>>& mat) {

     int n=mat.size();
     int m=mat[0].size();

     vector<int> ans;

     for(int i=0;i<n;i++)
     {
      for(int j=0;j<m;j++)
      {
         int el1 = (j - 1 >= 0) ? mat[i][j - 1] : -1;
         int el2 = (i - 1 >= 0) ? mat[i - 1][j] : -1;
         int el3 = (j + 1 < m) ? mat[i][j + 1] : -1;
         int el4 = (i + 1 < n) ? mat[i + 1][j] : -1;

         if(mat[i][j]>el1)
         {
           if(mat[i][j]>el2)
           {
            if(mat[i][j]>el3)
            {
               if(mat[i][j]>el4)
               {
                  ans.push_back(i);
                  ans.push_back(j);
                  return ans;
               }
            }
           } 
         }
      }
     }

     return {-1,-1};
        
    }


int main()
{
   vector<vector<int>> arr={{1, 2, 3}, {4, 5, 6}, {7, 8, 0}};

   
   vector<int> res=findPeakGrid(arr);

   for(auto it: res)
   {
      cout<<it<<" ";
   }

   return 0;   
}