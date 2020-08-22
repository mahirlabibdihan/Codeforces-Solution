#include<bits/stdc++.h>
using namespace std;

map<char,int> y; string x;

void dihan()
{
    cin>>x;   for(auto i:x) y[i]++;

    while(y.rbegin()->second--) cout<<y.rbegin()->first;
}

int main(){int t;dihan();}

