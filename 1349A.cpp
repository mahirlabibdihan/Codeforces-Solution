#include<iostream>
using namespace std;

/*
  By analyzing,I have found out that,
  gcd({lcm({x[i],x[j]})|i<j}) 
  is equivalent to
  gcd({ lcm(x[i], gcd({x[j]|i<j}) ) })
  
  So, for every i,
  S-1:first I need to calculate gcd of all x[j] where j>i.
  S-2:Then I will calculate lcm of x[i] and gcd of S-1.
  S-3:Lastly I will calculate gcd of all lcm of S-2.
*/
long long gcd(long long a,long long b)
{
    while(a)
    {
       long long c=a;
       a=b%a;
       b=c;
    }
    return b;
}

long long lcm(long long a,long long b)
{
    return a*b/gcd(a,b);
}

int main()
{
    int n; 
    cin>>n; 
    int x[100000];
    for(int i=0;i<n;i++)
    {
      cin>>x[i];
    }

    long long ans=0,lastGcd,Gcd,Lcm;
    for(int i=n-2;i>=0;i--)
    {
      // S-1
      if(i==n-2) Gcd=x[i+1];
      else Gcd=gcd(x[i+1],lastGcd); 
      
      // S-2
      Lcm = lcm(x[i],Gcd);
      
      // S-3
      if(ans==0) ans=Lcm;
      else ans=gcd(ans,Lcm);
      
      lastGcd=Gcd;
    }
    cout<<ans;
}
