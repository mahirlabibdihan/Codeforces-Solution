// 0 0 2 3
// 3 4 2 1
// 1 0 0 0

// 0 2 1
// 0 1 2
// 3 0 0
#include <iostream>
#include <vector>
using namespace std;
#define FASTIO               \
    ios::sync_with_stdio(0); \
    cin.tie(nullptr);
typedef long long int64;
typedef unsigned long long uint64;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n), c(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        cin >> b[i];
    }
    vector<bool> visited(n, false);
    for (int i = 0; i < n; i++)
    {
        // cout << a[i] << " " << b[i] << endl;
        if (n - (a[i] + b[i]) >= 0 && !visited[n - (a[i] + b[i])])
        {

            visited[n - (a[i] + b[i])] = true;
            c[i] = n - (a[i] + b[i]);
            // cout << c[i] << endl;
        }
        else
        {
            cout << -1 << endl;
            return;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << c[i] << " ";
    }
    cout << endl;
}
int main()
{
    FASTIO;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}