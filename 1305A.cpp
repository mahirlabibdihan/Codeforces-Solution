#include<bits/stdc++.h>
using namespace std;

int main()

{
   int t,i,n; cin>>t;

   while(t--) { cin>>n; vector<int> x(n),y(n);

   for(i=0;i<n;i++) cin>>x[i]; sort(x.begin(),x.end());
   for(i=0;i<n;i++) cin>>y[i]; sort(y.begin(),y.end());

   for(i=0;i<n;i++) cout<<x[i]<<" "; cout<<endl;
   for(i=0;i<n;i++) cout<<y[i]<<" "; cout<<endl; }
}
