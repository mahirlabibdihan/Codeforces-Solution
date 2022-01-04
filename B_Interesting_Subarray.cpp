#include <iostream>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a[n];

    int idx = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i > 0)
        {
            if (abs(a[i] - a[i - 1]) > 1)
            {
                idx = i;
            }
        }
    }
    if (idx > -1)
    {
        cout << "YES" << endl;
        cout << idx << " " << idx + 1 << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}