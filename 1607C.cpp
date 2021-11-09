#include <bits/stdc++.h>
using namespace std;
#define __FAST__ ios::sync_with_stdio(0);cin.tie(nullptr);
#define vin(a) for(ll &i:a) cin>>i;
#define vout(a) for(ll i:a) cout<<i<<" ";
typedef long long ll;
typedef vector<ll> vll;
void solve()
{
	int n;cin>>n;
	ll a[n];
	for(int i=0;i<n;i++) cin>>a[i];

	sort(a,a+n);

	ll ans=a[0];

	for(int i=1;i<n;i++)
	{
		ans=max(ans,a[i]-a[i-1]);
	}
	cout<<ans<<endl;
}
int main()
{
	__FAST__
	int t; cin>>t; while(t--)
	solve();
}