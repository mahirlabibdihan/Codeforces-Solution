#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d,i,j,k,x; cin>>a>>b>>c>>d;
    long long s=0;

    for(i=c;i<=d;i++)
    {
        for(j=c;j>=b;j--)
        {x=i-j+1;

            if(x<=b)
            {
                if(x>=a) s+=b-x+1;
                else s+=b-a+1;
            }
            else break;
        }
        if(j==c) break;
    }

    cout<<s;
}


