#include<bits/stdc++.h>
using namespace std;

void dihan()
{
    int n,x,sum=0,i,k,l=-1,r; cin>>n>>x;

    for(i=0;i<n;i++)
        {cin>>k; sum+=k;
        if(k%x) {if(l<0) l=i; r=i;} }

    if(sum%x) cout<<n<<endl;
    else if(l>-1) cout<<n-min(n-r,l+1)<<endl;
    else cout<<-1<<endl;
}

int main(){int t;cin>>t;while(t--)dihan();}
