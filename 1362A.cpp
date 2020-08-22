#include<iostream>
using namespace std;

int main()
{
    long long t,a,b,c,x,y,z; cin>>t; while(t--)
    {
        cin>>a>>b;

        x=max(a,b); y=min(a,b);

        if(x%y) cout<<"-1"<<endl;

        else
        {
          z=x/y;
          for(c=0;;c++)
          {
              if(!(z%8)) z/=8;
              else if(!(z%4)) z/=4;
              else if(!(z%2)) z/=2;
              else if(z==1) {cout<<c<<endl; break;}
              else {cout<<"-1"<<endl;  break;}
          }
        }
    }
}
