#include<bits/stdc++.h>
using namespace std;

int RowindexMaxElement(vector<vector<int>>& mat, int mid)
{
   int maxi=INT_MIN;
   int max_index=0;

   int n=mat.size();
   int m=mat[0].size();

   for(int i=0;i<n;i++)
   {
     if(mat[i][mid]>maxi)
     {
      maxi=mat[i][mid];
      max_index=i;
     }
   }

   return max_index;
}


vector<int> findPeakGrid(vector<vector<int>>& mat) {

     //Optimal Logic:
     //We are somehow trying to use 1D array peak element concept
     //so we are applying binary search on column indexs.
     //By finding max element in the column we eliminiate the column part
     //Now we have to find the peak element in the row that contains the
     //max element of the column.

     int n=mat.size();
     int m=mat[0].size();

     vector<int> ans;

     int low=0;
     int high=m-1;

     while(low<=high)
     {
      int mid=(low+high)/2;

      int max_el_idx=RowindexMaxElement(mat,mid);

      int left=mid-1>=0?mat[max_el_idx][mid-1]:-1;
      int right=mid+1<m?mat[max_el_idx][mid+1]:-1;

      if(mat[max_el_idx][mid]>left && mat[max_el_idx][mid]>right)
      {
         ans.push_back(max_el_idx);
         ans.push_back(mid);
         return ans;
      }
      else if(mat[max_el_idx][mid]<left)
      {
         high=mid-1;
      }
      else
      {
         low=mid+1;
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