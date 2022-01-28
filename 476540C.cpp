#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    int result = 0;
    for (int i = 1; i <= n; i++)
    {
        int tmp;
        cin >> tmp;
        result = max(result, tmp - i);
    }
    cout << result << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
