#include<bits/stdc++.h>
#include<cctype>
using namespace std;

int main()

{
    char x[100]; cin>>x; strlwr(x);

    for(int i=0; i<x.length(); i++)

    if(x[i]!='a'&x[i]!='e'&x[i]!='i'&x[i]!='o'&x[i]!='u'&x[i]!='y')  cout<<"."<<x[i];

}
