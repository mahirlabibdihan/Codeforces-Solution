#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    string s;
    cin >> s;
    ll n = s.length();
    for (int i = n - 1; i > 0; i--)
    {
        int sum = s[i] + s[i - 1] - 2 * '0';
        if (sum >= 10)
        {
            s[i] = (sum % 10) + '0';
            sum /= 10;
            s[i - 1] = (sum % 10) + '0';
            cout << s << endl;
            return;
        }
    }
    cout << s[0] + s[1] - 2 * '0';
    for (int i = 2; i < n; i++)
    {
        cout << s[i];
    }
    cout << endl;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
