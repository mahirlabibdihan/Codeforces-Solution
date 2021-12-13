#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    int a[n];
    int m = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        m = max(m, a[i]);
    }
    if (m == a[0] || m == a[n - 1])
    {
        reverse(a, a + n);
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    else
    {
        cout << -1 << endl;
    }
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