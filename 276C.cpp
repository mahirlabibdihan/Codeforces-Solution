#include<bits/stdc++.h>
using namespace std;

int main()
{

 int n,m,i,j,s=0;   cin>>n>>m;

 int x[n],y[m],z[m],w[n]={};

 for(i=0;i<n;i++)   cin>>x[i];

 for(i=0;i<m;i++) { cin>>y[i]>>z[i];

 for(j=y[i];j<=z[i];j++) w[j-1]++; }

 sort(w,w+n);  sort(x,x+n);

 for(i=0;i<n;i++)   s+=w[i]*x[i];

 cout<<s;

}

