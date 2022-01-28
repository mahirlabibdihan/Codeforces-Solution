#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

void solve()
{
    ll n;
    cin >> n;
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        sum += tmp;
    }
    cout << (sum % n) * (n - (sum % n)) << endl;
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
