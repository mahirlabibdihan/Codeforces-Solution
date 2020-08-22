#include<bits/stdc++.h>
using namespace std;

int main()
{
  string x;  cin>>x; x="00"+x; int i,j,k,n=x.length();

  for(i=0;i<n-2;i++) for(j=i+1;j<n-1;j++) for(k=j+1;k<n;k++) if(!(((x[i]-48)*100+(x[j]-48)*10+(x[k]-48))%8))  goto X;

  X:  if(i==n-2) cout<<"NO"; else cout<<"YES"<<endl<<(x[i]-48)*100+(x[j]-48)*10+(x[k]-48);

}
