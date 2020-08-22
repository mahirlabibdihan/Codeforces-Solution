#include<bits/stdc++.h>
using namespace std;

int cons(char x){if(x=='a'|x=='e'|x=='i'|x=='o'|x=='u') return 0; else return 1;}

int main()
{
    string x; cin>>x;

    int i,n=x.length();

    for(i=0;i<n-1;i++)

    if(cons(x[i])&x[i]!='n'&cons(x[i+1])) break;

    if(i==n-1&&(!cons(x[i])|x[i]=='n')) cout<<"YES"; else cout<<"NO";
}
