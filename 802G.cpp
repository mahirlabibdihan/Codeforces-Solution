#include<bits/stdc++.h>
using namespace std;

int main()
{
    string x,y={"heidi"}; cin>>x;
    int n=x.length(),i,j;

    for(i=0,j=0;i<n&j<5;i++) if(x[i]==y[j]) j++;

    if(j==5) cout<<"YES"; else cout<<"NO";
}
