#include<iostream>
#include<bitset>
using namespace std;

int main()
{
    int n,t,k,i,c=0;

    cin>>n>>t>>k; int x[t+1];

    for(int &i:x) cin>>i;

    bitset<20>a(x[t]);

    for(i=0;i<t;i++)
    {
      bitset<20>b(x[i]);

     if((a^b).count()<=k) c++;
    }
    cout<<c;
}
