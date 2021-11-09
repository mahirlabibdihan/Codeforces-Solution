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
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	string s;
	cin>>s;

	vector<int> B,R;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='R')
		{
			R.push_back(a[i]);
		}
		else
		{
			B.push_back(a[i]);
		}
	}
	sort(B.begin(),B.end());
	sort(R.begin(),R.end(),greater<int>());
	// set<int> B,R;
	int l=1,r=n;
	for(int i=0;i<B.size();i++)
	{
		//cout<<P[i].first<<" "<<P[i].second<<endl;
		
		/*if(P[i].second=='R')
		{
			if(P[i].first<=r)
			{
				r--;
			}
		}*/
		//else
		{
			if(B[i]>=l)
			{
				l++;
			}
		}
		//cout<<"->"<<l<<" "<<r<<endl;
	}
	for(int i=0;i<R.size();i++)
	{
		//cout<<R[i]<<endl;
		
		//if(P[i].second=='R')
		{
			if(R[i]<=r)
			{
				r--;
			}
		}
		//else
		/*{
			if(P[i].first>=l)
			{
				l++;
			}
		}*/
		//cout<<"->"<<l<<" "<<r<<endl;
	}
	if(r<l) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}
int main()
{
	__FAST__
	int t; cin>>t; while(t--)
	solve();
}