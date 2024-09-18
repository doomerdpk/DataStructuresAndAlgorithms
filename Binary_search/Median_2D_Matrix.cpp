#include<bits/stdc++.h>
using namespace std;


int smallerEquals(vector<vector<int>>&matrix, int x)
    {
      //Using the concept of upper bound, Find smallerEquals in each row and add
      int count=0;
      int n=matrix.size();
      for(int i=0;i<n;i++)
      {
         auto it=upper_bound(matrix[i].begin(),matrix[i].end(),x);
         int index=it-matrix[i].begin();

         count+=index;
      }

      return count;
    }

 int findMedian(vector<vector<int>>&matrix) {

   //Brute Force:
   //Take a 1D vector and insert all the elements of the 2D into that.
   //Sort the 1D vector and find the middle element. That will be the median as
   //Median is the middle value of the sorted set of numbers.
   //Since it is given that there will always be odd numbers of elements then
   //There will be (n/2) elements on both sides of the median.

   //Optimized approach:
   //Median will be the first number for which elements lesser than equal to in
   //2D vector is greater then n/2. This will be criteria to apply the binary search.
   //Search space: min element of the 2D array to max element of the 2D array
   

    int n=matrix.size();
    int m=matrix[0].size();

    int low=INT_MAX;
    int high=INT_MIN;

    for(int i=0;i<n;i++)
    {
      //min element of the 2D array given the criteia that the rows are sorted
      low=min(low,matrix[i][0]);
      //max element of the 2D array given the criteia that the rows are sorted
      high=max(high,matrix[i][m-1]);
    }

    
    while(low<=high)
    {
      int mid=(low+high)/2;

      if(smallerEquals(matrix, mid)<=(n*m)/2)
      {
         low=mid+1;
      }
      else
      {
         high=mid-1;
      }
    }
    
    //Opposite polarity concept
    return low;
      
    }


int main()
{
   vector<vector<int>> arr={{1, 3, 8}, {2, 3, 4}, {1, 2, 5} };

   
   int res=findMedian(arr);

   std::cout<<res;

   return 0;   
}