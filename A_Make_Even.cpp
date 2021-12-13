#include <iostream>
using namespace std;
typedef long long ll;

void solve()
{
    string s;
    cin >> s;
    int n = s.length();
    if ((s[n - 1] - '0') % 2 == 0)
    {
        cout << 0 << endl;
    }
    else if ((s[0] - '0') % 2 == 0)
    {
        cout << 1 << endl;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if ((s[i] - '0') % 2 == 0)
            {
                cout << 2 << endl;
                return;
            }
        }
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