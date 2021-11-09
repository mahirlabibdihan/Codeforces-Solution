#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

int main()
{
	int n;
	cin>>n;
	vector<string> s(n);
	
	map<int,int> l,r;
	for(int i=0;i<n;i++)
	{
		cin>>s[i];
		int m=s[i].length();

		int erp=0;
		int count=0;
		for(char c:s[i])
		{
			if(c=='(') 
			{
				count++;
			}
			else 
			{
				if(count==0) erp++;
				else count--;
			}
		}

		if(erp>0) 
		{
			if(count==0)
			{
				r[erp]++;
			}		
		}
		else 
		{
			l[count]++;
		}
	}

	int c=0;
	for(auto i:l)
	{
		if(i.first==0)
		{
			c+=i.second/2;
		}
		else
		{
			c+=min(i.second,r[i.first]);
		}
	}

	cout<<c<<endl;
}