// 1 0 1 0 1 0 1
// 1 0 1 0 1 1
// 1 1 0 1 0 1

// Best approach will be deleting the first 0 from left.

#include <iostream>
using namespace std;

int main()
{
	string s;
	cin>>s;
	bool deleted=false;
	int n=s.length();
	for(int i=0;i<n-1;i++)
	{
		if(!deleted && s[i]=='0')
		{
			deleted=true;
		}
		else
		{
			cout<<s[i];
		}
	}
	if(deleted)
	{
		cout<<s[n-1];
	}
}