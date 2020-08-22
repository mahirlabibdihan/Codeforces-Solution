#include<iostream>
using namespace std;

int main()
{
    int n,i,s,c=0,a; cin>>n;
    for(i=19;;i++)
    {s=0; a=i;
    while(a)
    {
        s+=a%10;
        a/=10;
    }
    if(s==10) c++;
    if(c==n) break;
    }
    cout<<i;
}
