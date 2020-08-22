#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define _for(i,a,n) for(i=a;i<n;i++)
ll n,s,i,l,r=1e13+1,m,h[10];
string x,y="BSC";
int main()
{
	 cin>>x; for(auto i:x) h[y.find(i)]++;
    _for(i,3,10) cin>>h[i]; 

     while(l+1<r)
    {
       	for(m=(l+r)/2,s=i=0;i<3;i++)
          s+=max(0LL,m*h[i]-h[i+3])*h[i+6];     
         (s>h[9])?r=m:l=m;
    }
     cout<<l;
}
