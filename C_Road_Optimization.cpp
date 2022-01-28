#include <iostream>
#include <vector>
#include <queue>
#include <climits>
#include <algorithm>
using namespace std;
typedef long long ll;

void solve()
{

    ll n, l, k;
    cin >> n >> l >> k;
    vector<ll> d(n + 1), a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> d[i];
    }
    d[n] = l;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<pair<ll, int>> v;
    for (int i = 1; i < n; i++)
    {
        ll pre = (d[i] - d[i - 1]) * a[i - 1] + (d[i + 1] - d[i]) * a[i];
        ll post = (d[i + 1] - d[i - 1]) * a[i - 1];
        v.push_back({post - pre, i});
    }
    sort(v.begin(), v.end());
    vector<int> visit(n + 1, false);
    ll t = v.size();
    for (int i = 0; i < min(t, k); i++)
    {
        visit[v[i].second] = true;
    }
    ll result = 0;
    for (int i = 1, j = 0; i <= n; i++)
    {
        if (!visit[i])
        {
            result += (d[i] - d[j]) * a[j];
            j = i;
        }
    }
    cout << result << endl;
}
int main()
{
    // int t;
    // cin >> t;
    // while (t--)
    {
        solve();
    }
}
