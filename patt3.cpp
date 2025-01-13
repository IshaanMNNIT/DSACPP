#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n : \n";
    cin>>n;
    int i,j,k;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i+1;j++)
        {
            cout<<j<<" ";
        }
        for(j=1;j<=2*i-2;j++)
        {
            cout<<"* ";
        }
        for(j=n-i+1;j>=1;j--)
        {
            cout<<j<<" ";
        }
        cout<<"\n";
    }
    return 0;
}