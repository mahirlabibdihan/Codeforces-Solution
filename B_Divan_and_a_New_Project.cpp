#include <iostream>
#include <set>
#include <cmath>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    set<pair<int, int>> a;
    for (int i = 1; i <= n; i++)
    {
        int tmp;
        cin >> tmp;
        a.insert({tmp, i});
    }
    int x[n + 1] = {};
    int l = -1, r = 1;
    ll sum = 0;
    for (auto i = a.rbegin(); i != a.rend(); i++)
    {
        if (abs(l) > r)
        {
            x[i->second] = r++;
        }
        else
        {
            x[i->second] = l--;
        }
        sum += (ll)i->first * 2 * abs(x[i->second]);
    }
    cout << sum << endl;
    for (int i = 0; i <= n; i++)
    {
        cout << x[i] << " ";
    }
    cout << endl;
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