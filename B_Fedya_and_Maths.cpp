#include <iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n = s.length();
    int a = (n>1?s[n-2]:0)*10 + s[n-1];
    if(a%4==0)
    {
        cout<<4;
    }
    else
    {
        cout<<0;
    }
}