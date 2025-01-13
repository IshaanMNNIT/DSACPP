#include<iostream>
using namespace std;
int fact(int n)
{
    int f=1,i;
    for(i=1;i<=n;i++)
    {
        f*=i;
    }
    if(n == 0)return 1;
    else return f;
}
int main()
{
    int n;
    cout <<"Enter the value of n \n";
    cin>>n;
    int i,j,k;
    for(i=1;i<=n;i++)
    {
        cout<<" ";
    }cout<<"1\n";
    int a = n - 2;
    for(i=2;i<=n;i++)
    {
        for(k=1;k<=a;k++)
        {
            cout<<" ";
        }
        for(j=0;j<=i;j++)
        {
            cout<<fact(i)/(fact(j)*fact(i-j)) << " ";
        }
        cout<<"\n";
        a=a-1;
    }
    return 0;
}


    
