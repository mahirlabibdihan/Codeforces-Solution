#include <iostream>
using namespace std;
typedef long long ll;

void solve()
{
    string s;
    cin >> s;
    int n = s.length();
    if (n % 2 == 0 && s.substr(0, n / 2) == s.substr(n / 2, n / 2))
    {
        cout << "YES" << endl;
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