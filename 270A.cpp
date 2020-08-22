#include<iostream>
using namespace std;

void dihan()
{
    int n; cin>>n;

    if(360%(180-n)) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}
int main(){int t;cin>>t;while(t--)dihan();}

