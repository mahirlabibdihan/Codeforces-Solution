#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,k,s,i; cin>>t;

    while(t--)
    {
        cin>>n>>k; s=0; vector<int> x(n),y(n);

        for(i=0;i<n;i++) cin>>x[i]; sort(x.begin(),x.end());

        for(i=0;i<n;i++) cin>>y[i]; sort(y.begin(),y.end(),greater<int>());

        for(i=0;i<k;i++) s+=max(y[i],x[i]); for(;i<n;i++) s+=x[i];

        cout<<s<<endl;
    }
}
