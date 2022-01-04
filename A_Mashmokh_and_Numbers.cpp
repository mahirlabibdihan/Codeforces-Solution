#include <iostream>
#include <vector>
#include <map>
using namespace std;
#define ll long long
vector<ll> solve(ll n, ll k)
{
    vector<ll> a;
    map<ll, bool> m;
    if (n == 1)
    {
        if (k != 0)
        {
            return a;
        }
    }
    while (n > 0)
    {
        if (k < n / 2)
        {
            return a;
        }
        if (k == n / 2)
        {
            break;
        }
        ll point = min(500000000LL, k - n / 2 + 1);
        m[point] = true;
        m[2 * point] = true;
        a.push_back(point);
        a.push_back(2 * point);
        n -= 2;
        k -= point;
    }
    for (int i = 1; n > 0 && i <= 1000000000; i++)
    {
        if (!m[i])
        {
            a.push_back(i);
            n--;
        }
    }
    return a;
}
int main()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a = solve(n, k);
    if (a.size() == n)
    {
        for (ll i : a)
        {
            cout << i << " ";
        }
    }
    else
    {
        cout << -1;
    }
}