#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
    int a,b,c,d; cin>>a>>b>>c>>d;

    if((a==c&b!=d)|(a!=c&b==d))
        cout<<a+abs(b-d)<<" "<<b+abs(a-c)<<" "<<c+abs(b-d)<<" "<<d+abs(a-c);

    else if(abs(a-c)==abs(b-d))
        cout<<a<<" "<<d<<" "<<c<<" "<<b;

    else cout<<"-1";
}
