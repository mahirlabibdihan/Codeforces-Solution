// Sum of first n odd numbers = n*n
// Sum of first n odd numbers = n*(n+1)
// Sum of first n numbers = n*(n+1)/2


// 10*(10+1)/2
// 1+2+3....+10
// (1+3+5+7+9) + (2+4+6+8+10)
// 5*5 + 5*6

// 11*(11+1)/2
// 1+2+3....+10+11
// (1+3+5+7+9+11) + (2+4+6+8+10)
// 6*6 + 5*6

// n = even
// # odd = n/2 , # even = n/2
// (n/2)*(n/2) + (n/2)*(n/2+1) = (n^2/4 + (n(n+2))/4) = n^2+n^2+2n/4  = n*(n+1)/2
// let, k = n/2 
// k*k + k(k+1) = 2k^2+k = k(2k+1) = n(n+1)/2

// n = odd , k=(n+1)/2 
// # odd = (n+1)/2, # even = (n-1)/2
// (n+1)/2*(n+1)/2 + (n-1)/2*(((n-1)/2)+1) = n*(n+1)/2
// let, k = (n+1)/2
// k*k + k(k-1) = 2k^2-k = k(2k-1) = n*(n+1)/2

// Case 1: n even
// # of odd numbers = n/2 , # of even numbers = n/2

// Case 2: n odd
// # of odd numbers = (2n+1)/2 , # of even numbers = (2n-1)/2


// -1 + 2 -3 + 4 .... + ((-1)^n)n
// even - odd
// case 1: n even
// k*(k+1) - k*k = k = n/2
// case 2: n odd
// k*(k-1) - k*k = -k = -(n+1)/2
 

#include <iostream>
using namespace std;

int main(){
	long long n;
	cin>>n;
	if(n%2==0){
		cout<<n/2<<endl;
	}else{
		cout<<-(n+1)/2<<endl;
	}
}