#include<iostream>
using namespace std;

int main()
{
    int n,a=0,b=0,c=0,s,i; cin>>n; int x[n];
    for(int &i:x) {cin>>i; if(i==1)a++; else if(i==2)b++; else c++;}

    s=min(min(a,b),c); cout<<s;

    while(s--)
    { a=1; b=1; c=1; cout<<endl;
        for(i=0;i<n;i++)
        {
            if(a&x[i]==1) {cout<<i+1<<" "; x[i]=0; a=0;}

            else if(b&x[i]==2) {cout<<i+1<<" "; x[i]=0; b=0;}

            else if(c&x[i]==3) {cout<<i+1<<" "; x[i]=0; c=0;}
        }
    }
}
