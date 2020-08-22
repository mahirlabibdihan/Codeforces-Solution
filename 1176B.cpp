#include<bits/stdc++.h>
using namespace std;

void dihan()
{
    int n,x,a=0,b=0,c=0;    cin>>n;
    while(n--)
    {
        cin>>x;
        if(x%3==1)a++; else if(x%3==2)b++; else c++;
    }

    cout<<c+min(a,b)+abs(a-b)/3<<endl;
}

int main(){int t;cin>>t;while(t--)dihan();}
