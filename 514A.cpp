#include<iostream>
using namespace std;

int main()
{
    string x; cin>>x; int n=x.length(),i;

    for(i=0;i<n;i++) if(x[i]>'4') x[i]='9'-x[i]+'0'; if(x[0]=='0') x[0]='9';

    cout<<x;
}
