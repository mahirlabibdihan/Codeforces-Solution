#include<bits/stdc++.h>
using namespace std;
#define _for(i,n) for(i=0;i<n;i++)
int a,b,i,j,sum;
int main()
{ 
 cin>>a; int x[a]; for(int &i:x) cin>>i; sort(x,x+a);
 cin>>b; int y[b]; for(int &i:y) cin>>i; sort(y,y+b);
_for(i,a) _for(j,b)if(abs(x[i]-y[j])<2)  {sum++; y[j]=-1; break;}
 cout<<sum;
}
