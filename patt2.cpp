#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n \n";
    cin>>n;
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=0;j<i;j++)
        {
            cout<< j+i <<" ";

        }cout << "\n";
    }
    return 0;
} 
// 1
// 23
// 345
// 4567
// 56789