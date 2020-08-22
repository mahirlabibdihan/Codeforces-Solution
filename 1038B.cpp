#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n; cin>>n;

    if(n>2)
    {
        cout<<"Yes"<<endl;

        cout<<n/2<<" ";for(i=2;i<=n;i+=2)cout<<i<<" ";cout<<endl;

        cout<<ceil(n/2.0)<<" ";for(i=1;i<=n;i+=2)cout<<i<<" ";cout<<endl;
    }
    else cout<<"No"<<endl;
}
