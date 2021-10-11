/*
	n%2==1 -> Yes
*/
#include <iostream>
using namespace std;

int main(){
	long long n,m;
	cin>>m;

	for(int i=0;i<m;i++){
		cin>>n;
		if(n%2==1) cout<<"YES"<<endl;
		else{
			while(n%2==0){
				n/=2;
			}
			if(n>1) cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}
	}
}