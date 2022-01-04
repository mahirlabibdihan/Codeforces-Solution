#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    int a[n];
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    cout << ceil(1.0 * sum / n) - floor(1.0 * sum / n) << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}