#include<iostream>
using namespace std;
int main()
{
    int n, flag = 0;
    cout<<"Enter the value of n : \n";
    cin >> n;
    for(int i=2;i<n;i++)
    {
        if(n%i == 0)
        {
            flag++;
            break;
        }
    }
    if(flag == 0 && n!=1)
    cout<<"Prime number";
    else
    cout<<"Not a Prime Number";
    return 0;
}
