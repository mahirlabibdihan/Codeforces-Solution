#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<vector<ll>> x{{0,0,0,0,0,0,0,0,0,0},
                     {1,2,3,4,5,6,7,8,9,0},
                     {2,4,6,8,0,2,4,6,8,0},
                     {3,6,9,2,5,8,1,4,7,0},
                     {4,8,2,6,0,4,8,2,6,0},
                     {5,0,5,0,5,0,5,0,5,0},
                     {6,2,8,4,0,6,2,8,4,0},
                     {7,4,1,8,5,2,9,6,3,0},
                     {8,6,4,2,0,8,6,4,2,0},
                     {9,8,7,6,5,4,3,2,1,0}};

vector<ll> y {0,45,40,45,40,25,40,45,40,45};

void dihan()
{
    ll n,k,i,sum; cin>>n>>k;

    for(i=0,sum=((n/k)/10)*y[k%10];i<(n/k)%10;i++) sum+=x[k%10][i];

    cout<<sum<<endl;
}

int main(){int t;cin>>t;while(t--)dihan();}


