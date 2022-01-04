#include <iostream>
#include <cmath>
#include <set>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    int square = 0, cube = 0;
    set<int> ans;
    for (long long i = 1; i * i <= n; i++)
    {
        if (i * i <= n)
        {
            ans.insert(i * i);
        }

        if (i * i * i <= n)
        {
            ans.insert(i * i * i);
        }
    }
    cout << ans.size() << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}