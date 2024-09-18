#include<bits/stdc++.h>
using namespace std;

void print1(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
void print2(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
void print3(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void print4(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
void print5(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=(n-i+1);j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
void print6(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=(n-i+1);j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void print7(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=(n-i);j++)
        {
            cout<<"  ";
        }
        for(int j=1;j<=(2*i -1 );j++)
        {
            cout<<"* ";
        }
        cout<<endl;
        for(int j=1;j<=(n-i);j++)
        {
            cout<<"  ";
        }
        cout<<endl;
        
    }
}
void print8(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i-1;j++)
        {
            cout<<"  ";
        }
        for(int j=1;j<=(2*n-2*i+1);j++)
        {
            cout<<"* ";
        }
        cout<<endl;
        for(int j=1;j<=i-1;j++)
        {
            cout<<"  ";
        }
        cout<<endl;
    }
}
void print9(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=(n-i);j++)
        {
            cout<<"  ";
        }
        for(int j=1;j<=(2*i -1 );j++)
        {
            cout<<"* ";
        }
        cout<<endl;
        for(int j=1;j<=(n-i);j++)
        {
            cout<<"  ";
        }
        cout<<endl;
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i-1;j++)
        {
            cout<<"  ";
        }
        for(int j=1;j<=(2*n-2*i+1);j++)
        {
            cout<<"* ";
        }
        cout<<endl;
        for(int j=1;j<=i-1;j++)
        {
            cout<<"  ";
        }
        cout<<endl;
    }
        
    
}
void print10(int n)
{
    for(int i=1;i<=(2*n-1);i++)
    {
        if(i<=n)
        {
        for(int j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        }
        else if(i>n)
        {
         for(int j=1;j<=(2*n-i);j++)
        {
            cout<<"* ";
        }   
        }
        cout<<endl;
    }
}
void print11(int n)
{
    int val=0;
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            val=1;
            for(int j=1;j<=i;j++)
            {
                cout<<val<<" ";
                val=1-val;
            }
        }
        else
        {
          for(int j=1;j<=i;j++)
            {
            cout<<val<<" ";
            val=1-val;
            }
        }
        
        cout<<endl;
    }
}
void print12(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        for(int j=1;j<=(2*n-2*i);j++)
        {
            cout<<"  ";
        }
        for(int j=i;j>0;j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    
    }   
        
}
void print13(int n)
{
    int num=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
}
void print14(int n)
{
    for(int i=1;i<=n;i++)
    {
        char c = 'A';
        for(int j=1;j<=i;j++)
        {
            cout<<c<<" ";
            c++;
        }
        cout<<endl;
    }
}
void print15(int n)
{
    for(int i=1;i<=n;i++)
    {
        char c = 'A';
        for(int j=1;j<=(n-i+1);j++)
        {
            cout<<c<<" ";
            c++;
        }
        cout<<endl;
    }
}
void print16(int n)
{
    char c = 'A';
    for(int i=1;i<=n;i++)
    {
        
        for(int j=1;j<=i;j++)
        {
            cout<<c<<" ";
        }
        c++;
        cout<<endl;
    }
}
void print17(int n)
{
    for(int i=1;i<=n;i++)
    {
        
        for(int j=1;j<=(n-i);j++)
        {
            cout<<"  ";
        }
        char c= 'A';
        for(int j=1;j<=(2*i-1);j++)
        {
            cout<<c<<" ";
            if(j<i)
            { 
              c++;
            }
            else
            {     
                c--;
            }
           
            
        }
        for(int j=1;j<=(n-i);j++)
        {
            cout<<"  ";
        }
        cout<<endl;
    }
}
void print18(int n)
{
    char c='E';
    for(int i=1;i<=n;i++)
    {
        char copy = c;
        for(int j=1;j<=i;j++)
        {
            
            cout<<copy<<" ";
            copy++;
        }
        c--;
        cout<<endl;
    }
}
void print19(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=(n-i+1);j++)
        {
            cout<<"* ";
        }
        for(int j=1;j<=2*(i-1);j++)
        {
            cout<<"  ";
        }
        for(int j=1;j<=(n-i+1);j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        for(int j=1;j<=2*(n-i);j++)
        {
            cout<<"  ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
void print20(int n)
{
    
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        for(int j=1;j<=2*(n-i);j++)
        {
            cout<<"  ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
     for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=(n-i+1);j++)
        {
            cout<<"* ";
        }
        for(int j=1;j<=2*(i-1);j++)
        {
            cout<<"  ";
        }
        for(int j=1;j<=(n-i+1);j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

}
void print21(int n)
{
    for(int i=1;i<=n;i++)
    {
        if(i==1 || i==n)
        {
            for(int j=1;j<=n;j++)
            {
                cout<<"* ";
            }
        }
        else
        {
            for(int j=1;j<=n;j++)
            {
                if(j==1 || j==n)
                {
                    cout<<"* ";
                }
                else
                {
                    cout<<"  ";
                }
            }
        }
        cout<<endl;
    }
}
void print22(int n)
{
 
}



int main()
{
    int n;
    cin>>n;
    //print1(n);
    //print2(n);
    //print3(n);
    //print4(n);
    //print5(n);
    //print6(n);
    //print7(n);
    //print8(n);
    //print9(n);
    //print10(n);
    //print11(n);
    //print12(n);
    //print13(n);
    //print14(n);
    //print15(n);
    //print16(n);
    //print17(n);
    //print18(n);
    //print19(n);
    //print20(n);
    //print21(n);
    print22(n);
}