#include <iostream>
#include <algorithm>
using namespace std;

//Compiler version g++ 6.3.0
/*
  My initial approach is, I will find out the lcm of the whole array.
  Then I will check every element of the array, if it can be made equal to the lcm by multiplying with 2 and 3 only.
  
  But in this approach the lcm will be very large that we can't hold it in any data type.
  In this way, we will get wrong lcm.
  
  So my second approach is, I will find out the lcm of adjacent elements.
  And check if both of the element can be made equal to their lcm by multiplying with 2 and 3 only.
*/
   
// O(log(min(a,b)))
int gcd(int a,int b)
{
  while(a!=0)
  {
    int c=a;
    a=b%a;
    b=c;
  }
  return b; // 1<= gcd(a,b) <= min(a,b)
}

// O(log(min(a,b)))
long long lcm(int a,int b)
{
  /*
    a -> 10^9
    b -> 10^9
    a*b -> 10^18
    
    unsigned long long -> 0 to 1.8x10^19
    long long -> -9x10^18 to 9x10^18
    
    So, we need to use long long or unsigned long long to store lcm.
  */
  return (long long)a*b/gcd(a,b);  // max(a,b) <= lcm(a,b) <= a*b
}

bool isPossible(long long lcm,int a)
{
  /*
    let, lcm = a * 2^p * 3^q * r
    if(r>1) NO
  */
  int r=lcm/a;
  while(true)
  {
    if(r%2==0) r/=2;
    if(r%3==0) r/=3;
    if(r%2!=0 && r%3!=0) break;
  }
  return r==1;
}
int main()
{
    int n,x[100000];
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
      cin>>x[i];
    }    
    
    // Calculating lcm of adjacent element and checking
    for(int i=1;i<n;i++)      
    {
      long long l=lcm(x[i],x[i-1]);   
                
      if(!isPossible(l,x[i]) || !isPossible(l,x[i-1]))
      {
        cout<<"NO";
        return 0;
      }
    }    
    cout<<"YES";
}