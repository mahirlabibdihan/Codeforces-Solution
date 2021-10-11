/*
 ______   _________ _      _       _
|  ____ \|___   ___| |    | |     | |
| |    \ \   | |   | |____| |     | |
| |    | |   | |   |  ____  |     | |
| |____/ /___| |___| |    | |_____| |
|_______/|_________|_|    |_________|
M A H I R     L A B I B     D I H A N

*/

#include<iostream>
#include<string>
#include<set>
using namespace std;

int main(){
	string s;
	getline(cin,s);
	set<char> sc;
	for(int i=1;i<s.length() && s.length()>2;i+=3){
		sc.insert(s[i]);
	}
	cout<<sc.size();
}