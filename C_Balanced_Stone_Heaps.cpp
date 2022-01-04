#include <iostream>
#include <vector>
#include <climits>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    ll result = INT_MAX;
    vector<ll> h(n), maxH(n), minH(n);
    for (ll &i : h)
    {
        cin >> i;
    }
    for (int i = 0; i < n; i++)
    {
        maxH[i] = h[i];
        if (i < n - 1)
        {
            if (i < n - 2)
            {
                maxH[i] += 2 * (h[i + 2] / 3);
            }
            if (i > 0)
            {
                maxH[i] += h[i + 1] / 3;
            }
        }

        minH[i] = h[i];
        if (i > 2)
        {
            minH[i] -= 3 * (h[i] / 3);
        }
        result = min(result, maxH[i]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << maxH[i] << " " << minH[i] << endl;
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