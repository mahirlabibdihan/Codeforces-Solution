#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

void solve()
{
    int n, m, rb, cb, rd, cd;
    cin >> n >> m >> rb >> cb >> rd >> cd;
    int result = 2 * max(n, m);
    if (rb <= rd)
    {
        result = min(result, rd - rb);
    }
    else
    {
        result = min(result, n - rb + n - rd);
    }

    if (cb <= cd)
    {
        result = min(result, cd - cb);
    }
    else
    {
        result = min(result, m - cb + m - cd);
    }
    cout << result << endl;
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