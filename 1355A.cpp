#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,i,n,x,max,min,s,a;

    cin>>t;

    while(t--)
    {
       cin>>x>>n;

       for(i=1;i<n;i++)
       { s=x;  max=x%10; min=x%10;

           while(x)
           {
               a=x%10;
               x/=10;

               if(a>max) max=a;
               if(a<min) min=a;
           }

           x=s+min*max;

           if(!min) break;
       }
       cout<<x<<endl;
    }
}
