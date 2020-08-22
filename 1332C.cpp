#include<iostream>
#include<string>
using namespace std;

int main()
{
   int t,n,k,i,c;

   cin>>t;

   while(t--)
   {
       string x; c=0;

       cin>>n>>k>>x;

       for(i=0;i<n-k;i++)
        if(x[i]!=x[i+k]) {c++; x[i+k]=x[i];}

       cout<<c<<endl;
    }
}
