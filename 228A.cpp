/*
So, the main goal is to find the total unique numbers in the input.
1.My initial approach will be using a set. And store the input in the set. And the size of the set will be the answer.
2.Total unique numbers can also be find manually. Sorting the numbers and counting the unique numbers. 
3.Or using nested loop. Checking every number, if it has a duplicate or not.
*/

#include <iostream>
#include <set>
using namespace std;

int main(){
	set<unsigned int> s;
	for(int i=0;i<4;i++){
		unsigned int temp;
		cin>>temp;
		s.insert(temp);
	}
	cout<<4-s.size();
}