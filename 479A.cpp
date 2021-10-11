/*
Case 1: a+(b*c)
Case 2: (a+b)*c
Case 3: (a*b)+c
Case 4: a*(b+c)
Case 5: a*b*c
Case 6: a+b+c

Observation 1:
a*c >= a
a*c + b*c >= a + b*c
(a+b)*c >= a + b*c
2 >= 1

Observation 2:
a*c >= c
a*c + a*b >= c + a*b
a*(b+c) >= c + a*b
4 >= 3

max(2,4,5,6) will be answer
*/

#include <iostream>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	cout<<(max(max(a*(b+c),a+b+c),max(a*b*c,(a+b)*c)));
}