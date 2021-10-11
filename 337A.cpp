/*
 ______   _________ _      _       _
|  ____ \|___   ___| |    | |     | |
| |    \ \   | |   | |____| |     | |
| |    | |   | |   |  ____  |     | |
| |____/ /___| |___| |    | |_____| |
|_______/|_________|_|    |_________|
M A H I R     L A B I B     D I H A N

*/

/*
n students
m puzzles - f1 pieces, f2 pieces .......
m>=n

So, we will sort(ascending) the array of pieces 
And take all the puzzles between i and j(including) index.
Where j - i + 1 = n
And x[j] - x[i] is minimum
*/

#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int x[m];
	for(int i=0;i<m;i++){
		cin>>x[i];
	}

	sort(x,x+m);

	int ans = 1000 - 4;

	for(int i=0;i+n-1<m;i++){
		ans = min(ans,x[i+n-1]-x[i]);
	}

	cout<<ans;
}