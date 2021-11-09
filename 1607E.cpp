#include <bits/stdc++.h>
using namespace std;
#define __FAST__ ios::sync_with_stdio(0);cin.tie(nullptr);
#define vin(a) for(ll &i:a) cin>>i;
#define vout(a) for(ll i:a) cout<<i<<" ";
typedef long long ll;
typedef vector<ll> vll;


int maxSum(vector<pair<int,int>> arr, int n, int k)
{
    // k must be greater
    k = min(k,n);
 
    int res = 0;
    for (int i=0; i<k; i++)
       res += arr[i].second;

   	int l=arr[0].first;
   	int r=arr[k-1].first;


    int curr_sum = res;
    for (int i=k; i<n; i++)
    {
       curr_sum += arr[i].second - arr[i-k].second;

       if(res<curr_sum)
       {
       		res = (curr_sum);
       		l++;
       		r++;
       }    
    }
 
    return l;
}
 

void solve()
{
	int n,m;
	cin>>n>>m;
	string s;
	cin>>s;
	map<int,set<int>> R,C;
	int d=0,r=0;
	R[0].insert(0);
	C[0].insert(0);

	int maxR=INT_MIN,minR=INT_MAX,maxD=INT_MIN,minD=INT_MAX;
	for(char c:s)
	{
		if(c=='R')
		{
			r++;
			
		}
		else if(c=='L')
		{
			r--;

		}
		else if(c=='U')
		{
			d--;

		}
		else if(c=='D')
		{
			d++;

		}

		C[r].insert(d);
		R[d].insert(r);

		maxR = max(maxR,r);
		minR = min(minR,r);
		maxD = max(maxD,d);
		minD = min(minD,d);
	}

	vector<pair<int,int>> rCount,cCount;

	for(int i=minD;i<=maxD;i++) 
	{
		rCount.push_back({i,R[i].size()});
		//cout<<i<<" "<<R[i].size()<<endl;
	}
	for(int i=minR;i<=maxR;i++) 
	{
		cCount.push_back({i,C[i].size()});
		//cout<<i<<" "<<C[i].size()<<endl;
	}

	auto x=maxSum(rCount,rCount.size(),n);
	auto y=maxSum(cCount,cCount.size(),m);
	
	if(x<0) cout<<min(-x+1,n)<<" ";
	else cout<<1<<" ";

	if(y<0) cout<<min(-y+1,m)<<endl;
	else cout<<1<<endl;
}
int main()
{
	__FAST__
	int t; cin>>t; while(t--)
	solve();
}