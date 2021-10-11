/*
	A		B		A^B
	0		0		 0
	0		1		 1
	1		0		 1
	1		1		 0

We can't take input as integer. Because the numbers can have leading zero's which will be removed if we store it in a integer. So we have to take the input numbers as strings. And iterate the two string, and do XOR operation between each character of both strings. But we need to convert the characters into integer before doing the xor operation. And again convert the resulting integer to character after xor operation.
*/
#include <iostream>
using namespace std;
int main(){
	string a,b,c;
	cin>>a>>b;
	for(int i=0;i<a.length();i++){
		c+=(((a[i]-'0')^(b[i]-'0'))+'0');
	}
	cout<<c;
}