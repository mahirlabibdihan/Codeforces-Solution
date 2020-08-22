#include<bits/stdc++.h>
using namespace std;

int main()
{
   long long a,b,s=1,i,c; cin>>a>>b;
   c=((a+10)/10)*10;
   for(i=min(b,c);i>a;i--)  {s*=i; s%=10;}
   cout<<s<<endl;
}
