#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;
    if (a + c == 2 * b)
    {
        cout << "YES" << endl;
    }
    else if (a + c > 2 * b)
    {
        if ((a + c - 2 * b) % 2 == 0 && ((a + c - 2 * b) / 2) % b == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else
    {
        if ((2 * b - a - c - a) % a == 0)
        {
            cout << "YES" << endl;
        }
        else if ((2 * b - a - c - c) % c == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
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