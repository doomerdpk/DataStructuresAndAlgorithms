#include<bits/stdc++.h>
using namespace std;

/*int select(int arr[], int i,int n)
{
  
  int min_idx=i;

  for(int j=i;j<n;j++)
  {
    if(arr[j]<arr[min_idx])
    {
        min_idx=j;
    }
  } 

  return min_idx;
}
     
void selectionSort(int arr[], int n)
{

   for(int i=0;i<n-1;i++)
   {
     int req_idx=select(arr,i,n);
     int temp=arr[req_idx];
     arr[req_idx]=arr[i];
     arr[i]=temp;
   }
       
}*/

/*void bubbleSort(int arr[], int n) {
        
        for(int itr=1;itr<=n-1;itr++)
        {
            for(int i=0;i<=n-2;i++)
            {
                if(arr[i]>arr[i+1])
                {
                    swap(arr[i],arr[i+1]);
                }
            }
        }
    }*/

    void insert(int arr[], int i, int n)
    {
        int j=i;
            while(j>0 && arr[j-1]>arr[j])
            {
               swap(arr[j],arr[j-1]);
               j--;
            }
    }
     
    
    void insertionSort(int arr[], int n)
    {
        for(int i=1;i<n;i++)
        {
            insert(arr,i,n);
        }
    }


int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
       cin>>arr[i];
    }
     

    //selectionSort(arr,n);
    //bubbleSort(arr,n);
    insertionSort(arr,n);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;   
}