#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

void solve()
{
    int n, k;
    cin >> n >> k;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    ll score = 0;
    for (int i = 0; i < n - 2 * k; i++)
    {
        score += a[i];
    }
    for (int i = 0; i < k; i++)
    {
        score += a[n - 2 * k + i] / a[n - k + i];
    }
    cout << score << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}