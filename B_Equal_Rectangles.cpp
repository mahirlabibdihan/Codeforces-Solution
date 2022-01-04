#include <iostream>
#include <algorithm>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a[4 * n];
    for (int i = 0; i < 4 * n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + 4 * n);
    /*for (int i = 0; i < 4 * n; i++)
    {
        cout << a[i] << ' ';
    }
    cout << endl;*/
    int area = a[0] * a[4 * n - 1];
    for (int i = 0; i < 2 * n; i += 2)
    {
        // cout << i << " " << 4 * n - i - 1 << " " << area << endl;
        // cout << i << ' ' << i + 1 << ' ' << 4 * n - i - 2 << ' ' << 4 * n - i - 1 << endl;
        // cout << a[i] << ' ' << a[i + 1] << ' ' << a[4 * n - i - 2] << ' ' << a[4 * n - i - 1] << endl;
        if ((a[i] != a[i + 1]) || (a[4 * n - i - 1] != a[4 * n - i - 2]) || a[i] * a[4 * n - i - 1] != area)
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}