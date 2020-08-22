#include<bits/stdc++.h>
using namespace std;

int main()
{
    int  n,i,c=0;

    string x;

    cin>>n>>x;

    for(i=0;i<n-1;i++) if(x[i]==x[i+1]) c++;

    cout<<c;
}
