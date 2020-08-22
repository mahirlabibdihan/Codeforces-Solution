#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n,i; string x;

   cin>>n>>x;

   if(n>1)
   {
       for(i=1;i<n;i++) if(x[0]!=x[i]) break;

       if(i==n) cout<<"NO";

       else cout<<"YES"<<endl<<x[0]<<x[i];
   }

   else cout<<"NO";

}
