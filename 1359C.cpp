#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pi 3.1415926535

void dihan()
{
    long long n,k,i,j,a,b,c,d=1,x; cin>>a>>b>>c;

    if(a-c==c-b) d=0;

    if(d)
    {
        x=1.0*(c-b)/((2*c)-a-b);

        if( (x*(a+b)+a)*( 2*(x+1) + 1 ) + ((x+1)*(a+b) + a)*(2*x+1) <= 2*c*( 2*x+1 )*( 2*x+3 ) )

        cout<<2*x+1<<endl;

        else   cout<<2*x+3<<endl;

    }

    else
    {
        cout<<"2"<<endl;
    }



}

int main(){int t;cin>>t;while(t--)dihan();}

