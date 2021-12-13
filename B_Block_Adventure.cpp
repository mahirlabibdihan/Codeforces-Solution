#include <iostream>
using namespace std;

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    int h[n];
    bool possible = true;
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
        if (i > 0)
        {
            if (h[i - 1] < max(h[i] - k, 0))
            {
                if (m >= max(h[i] - k, 0) - h[i - 1])
                {
                    m -= max(h[i] - k, 0) - h[i - 1];
                }
                else
                {
                    possible = false;
                }
            }
            else
            {
                m += h[i - 1] - max(h[i] - k, 0);
            }
        }
        // cout << m << endl;
    }
    cout << (possible ? "YES" : "NO") << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}