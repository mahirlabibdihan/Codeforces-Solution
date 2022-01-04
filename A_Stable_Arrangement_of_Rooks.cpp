#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
typedef long long ll;

void solve()
{
    int n, k;
    cin >> n >> k;
    if (2 * k > (n + 1))
    {
        cout << -1 << endl;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == j && i % 2 == 0 && k > 0)
                {
                    cout << 'R';
                    k--;
                }
                else
                {
                    cout << '.';
                }
            }
            cout << endl;
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