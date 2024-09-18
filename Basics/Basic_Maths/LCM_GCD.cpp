#include<bits/stdc++.h>
using namespace std;

vector<long long> lcmAndGcd(long long A , long long B)
{
  vector<long long> vec2;
  
  long long copy_A=A;
  long long copy_B=B;

  //GCD
  while(A>0 && B>0)
  {
    if(A>B)
    {
      A=A%B;
    }
    else
    {
      B=B%A;
    }
  }
  if(A==0) vec2.push_back(B);
  else vec2.push_back(A);

  //LCM
  long long GCD=vec2[0];
  vec2.insert(vec2.begin(),(copy_A*copy_B)/GCD);


  return vec2;
}

int main()
{
    long long a,b;
    cin>>a>>b;

    vector<long long> vec1 = lcmAndGcd(a,b);
    
    for(auto it: vec1)
    {
      cout<<it<<" ";
    }
    return 0;   
}