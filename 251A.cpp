#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll n,k,i,j,sum=0,a;

    cin>>n>>k;

    vector<ll> x;

    for(i=0; i<n; i++)
    {
       cin>>a; x.push_back(a);
    }


    for(i=0; i<n-2; i++)
    {

        j=upper_bound(x.begin(),x.end(),k+x[i])-x.begin();

        if(j-i<3) continue;

        sum+=(j-i-1)*(j-i-2)/2;
    }
    cout<<sum;
}
