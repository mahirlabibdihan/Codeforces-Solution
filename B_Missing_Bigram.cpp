#include <iostream>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    string s[n - 2], ans;
    for (int i = 0; i < n - 2; i++)
    {
        cin >> s[i];
    }
    ans = s[0][0];
    for (int i = 0; i < n - 3; i++)
    {
        if (s[i][1] == s[i + 1][0])
        {
            ans += s[i][1];
        }
        else
        {
            ans += s[i][1];
            ans += s[i + 1][0];
        }
    }
    ans += s[n - 3][1];
    if (ans.length() < n)
    {
        ans += 'a';
    }
    cout << ans << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}