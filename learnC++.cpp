#include<bits/stdc++.h> // includes all the libraries present in C++
// #include<iostream> is basic skeleton for c++ program like java.lang
using namespace std;
int main()
{
    // Comments
    // Data Types : 
    // 1 >> Integers : 
    // int : 4 bytes size and Range of values is -2147483648 to 2147489648
    // unsigned short : 2 bytes size and Range of values is 0 to 65535
    // long : 4 bytes size and Range of values is -2147483648 to 2147489648
    // unsigned long : 4 bytes size and Range of values is 0 to 4294967295
    // long long : 8 bytes size and Range is very big

    // 2 >> Floating 
    // float and double

    // 3 >> String 
    // string and getline
    // string s;
    // cin>> s; Inputs a word
    // cout<< s + "\n"; 
    // string s1,s2;
    // cin>>s1>>s2;
    // cout<<s1<<" "<<s2;
    string str;
    getline(cin,str); // To input a line
    cout<<str+ "\n";
    // 4 >>char
    char ch = 'g';
    cout<<ch<<"\n";
    // Switch Statements
    int day_no;
    cout<<"Enter the day number : \n";
    cin>>day_no;
    switch(day_no)
    {
        case 1 : 
        cout<<"Monday\n";
        break;
        case 2 : 
        cout<<"Tuesday\n";
        break;
        case 3 : 
        cout<<"Wednesday\n";
        break;
        case 4 : 
        cout<<"Thursday\n";
        break;
        case 5 : 
        cout<<"Friday\n";
        break;
        case 6 : 
        cout<<"Saturday\n";
        break;
        case 7 :
        cout<<"Sunday\n";
        default :
        cout<<"Invalid Day Number";
    }
    
    return 0;
}


