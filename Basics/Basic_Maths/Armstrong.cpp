#include<bits/stdc++.h>
using namespace std;
    bool isArmstrong(int x) {

        int countdgt = log10(x)+1;
        int copy =x;
        int resnum =0;

        while(x>0)
        {
            int dgt = x%10;
            resnum=resnum + pow(dgt,countdgt);
            x=x/10;
        }
        
        if(resnum==copy)return true;
        else return false;
        
    }

int main()
{
    int n;
    cin>>n;
    cout<<isArmstrong(n);
}