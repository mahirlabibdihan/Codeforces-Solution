#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
   int n,a=0,b=0,i,c,d,j; cin>>n; int x[n],y[n],z[n];

   for(i=0;i<n;i++) {cin>>x[i]>>y[i]; a+=x[i]; b+=y[i]; z[i]=x[i]-y[i];}

       i=min_element(z,z+n)-z;
       c=abs(a-x[i]+y[i]-(b-y[i]+x[i]));

       j=max_element(z,z+n)-z;
       d=abs(a-x[j]+y[j]-(b-y[j]+x[j]));

       if(c>abs(a-b)|d>abs(a-b))
       {c>=d? cout<<i+1:cout<<j+1;}
       else cout<<"0";
}
