/*
The idea is to we will iterate the array from end. 
And for every element we will check if there is any element greater than it in the lower index.
If we find any element we will swap them.
3	2	1	2
			^
2	2	1	3
		^
2	1	2	3
	^
1	2	2	3
^

So, we are actually sorting the array.
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int n;
	cin>>n;
	int x[n];
	
	for(int i=0;i<n;i++){
		cin>>x[i];
	}

	sort(x,x+n);

	for(int i=0;i<n;i++){
		cout<<x[i]<<" ";
	}
}