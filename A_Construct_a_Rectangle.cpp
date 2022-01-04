#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a == b)
    {
        if (c % 2 == 0)
        {
            cout << "YES" << endl;
            return;
        }
    }
    if (b == c)
    {
        if (a % 2 == 0)
        {
            cout << "YES" << endl;
            return;
        }
    }
    if (a == c)
    {
        if (b % 2 == 0)
        {
            cout << "YES" << endl;
            return;
        }
    }
    if (a + b == c || a + c == b || b + c == a)
    {
        cout << "YES" << endl;
        return;
    }
    // else
    {
        cout << "NO" << endl;
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