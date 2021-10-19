#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0
/*
  Explanation:
  My initial approach is, I will find out the lcm of the whole array.
  Then I will check every element of the array, if it can be made equal to the lcm by multiplying with 2 and 3 only.
  
  But in this approach the lcm will be very large that we can't hold it in any data type.
  In this way, we will get wrong lcm.
  
  So my second approach is, I will find out the lcm of adjacent elements.
  And check if both of the element can be made equal to their lcm by multiplying with 2 and 3 only.
  Suppose, adjacent elements are a and b.
  For a, we need to check if 2 and 3 are the only factors of lcm(a,b)/a
  For b, we need to check if 2 and 3 are the only factors of lcm(a,b)/b
  
  On further analysis, I have figured out that,
  lcm(a,b) = (a*b)/gcd(a,b)
  thus,
  lcm(a,b)/a = b/gcd(a,b)
  lcm(a,b)/b = a/gcd(a,b)
 
  So, it is enough to check if 2 and 3 are the only factors of b/gcd(a,b) and a/gcd(a,b)
  So, we don't need to calculate lcm, we can work with gcd.
  Thus we don't need to worry about big value of lcm.
  
  So, we can go back to our initial approach.
  And find out the gcd of whole array.
  And check every element, if we can make gcd equal to that element by multiplying with 2 and 3 only.
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

bool isTwoAndThreeAreOnlyFactors(int n)
{
  /*
    let, n = 2^p * 3^q * r
    if(r==1) YES
  */
  // O(max(p,q))
  while(true)
  {
    if(n%2==0) n/=2;
    if(n%3==0) n/=3;
    if(n%2!=0 && n%3!=0) break;
  }
  return n==1; // n -> r
}
int main()
{
    int n,x[100000];
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
      cin>>x[i];
    }    
    
    for(int i=1;i<n;i++)      
    {
      int g=gcd(x[i],x[i-1]);   
                
      if(!isTwoAndThreeAreOnlyFactors(x[i-1]/g) || !isTwoAndThreeAreOnlyFactors(x[i]/g))
      {
        cout<<"NO";
        return 0;
      }
    }    
    cout<<"YES";
}
