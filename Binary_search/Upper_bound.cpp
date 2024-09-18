#include<bits/stdc++.h>
using namespace std;


long long upp_bound(vector<long long> nums, long long n, long long x)
{
    //If no number is greater than x is present in the vector then
    // upper bound will be the ending index
    int ans=n;

    //Problem is involving searching in sorted space - Binary Search
    int s=0;
    int e=n-1;

    while(s<=e)
    {
        int mid=(s+e)/2;
        
        //to find the smallest index such that nums[i]>x
        if(nums[mid]>x)
        {
            ans=mid;
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
    }

    return ans;

}

int main()
{
   vector<long long> arr={1,2,8,10,11,12,19};
   long long n=7;

   long long x=5;

   cout<<upp_bound(arr,n,x);
   
    return 0;   
}