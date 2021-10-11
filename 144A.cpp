/*
let,
max = M
min = m

Total n numbers
Case 1: .... M(i) .... m(j) ....
i < j
Ans: i + (n-j-1)
Case 2: .... m(j) .... M(i) ....
i > j
Ans: i + (n-j-2)

If there are multiple max, we will take the lower index.
If there are multiple min, we will take the higher index.
*/
#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int x[n];
	int max=0, min=0;
	for(int i=0;i<n;i++){
		cin>>x[i];
		if(x[i]>x[max]) max = i;
		if(x[i]<=x[min]) min = i;
	}

	if(max<min) cout<<max+n-min-1;
	else cout<<max+n-min-2;
}