#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<cmath>

using namespace std;

int main()
{
    int n,s,k,i;

    cin>>n>>s; k=ceil(s/2.0);

    if(k<=n-1|k>=s-n+1) cout<<"NO";

    else {cout<<"YES"<<endl;

    for(i=1;i<n;i++) cout<<1<<" "; cout<<s-n+1<<endl<<k;}
}

