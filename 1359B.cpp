#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pi 3.1415926535



void dihan()
{
    int n,m,x,y,k,i,j,a,b; cin>>n>>m>>x>>y;
    long long sum=0;

    if(2*x>y) b=y; else b=2*x;

    a=x;

    while(n--)
    {
        string s; cin>>s;

        for(i=0;i<m;i++)
        {
            if(i<m-1&s[i]=='.'&s[i+1]=='.') {sum+=b; i++;}

            else if(s[i]=='.') sum+=a;
        }

    }

    cout<<sum<<endl;





}

int main(){int t;cin>>t;while(t--)dihan();}

