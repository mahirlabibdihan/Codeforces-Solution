#include <bits/stdc++.h>
using namespace std;
#define __FAST__ ios::sync_with_stdio(0);cin.tie(nullptr);
#define vin(a) for(ll &i:a) cin>>i;
#define vout(a) for(ll i:a) cout<<i<<" ";
typedef long long ll;
typedef vector<ll> vll;
void solve()
{
	ll x,n; 
	cin>>x>>n;
	//if(x%2==0)
	{
		//n%=4;
		for(long long i=n-(n%4)+1;i<=n;i++)
		{
			if(x%2==0) x-=i;
			else x+=i;
			//cout<<x<<" "<<i<<endl;
		}
	}
	/*else
	{
		n%=5;
		for(int i=5*(n/5);i<=5*(n/5)+n;i++)
		{
			if(x%2==0) x-=i;
			else x+=i;
		}
	}*/

	/*for(int i=1;i<=n;i++)
	{
		if(x%2==0) x-=i;
		else x+=i;
		cout<<x<<" "<<i<<endl;
	}*/
	cout<<x<<endl;
}
int main()
{
	__FAST__
	int t; cin>>t; while(t--)
	solve();
}