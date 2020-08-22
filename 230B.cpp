#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,x,a,i,j;

    cin>>t;
    while(t--)
    {
        scanf("%lld",&x);

         a=sqrt(x);

         for(j=2;j*j<=a;j++)
            if(!(a%j)) break;

         if(a*a==x&j*j>a&x>1) cout<<"YES"<<endl;
         else cout<<"NO"<<endl;

    }
}
