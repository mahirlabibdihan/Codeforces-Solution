#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd(ll a, ll b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
void solve()
{
    int n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll oddGcd = a[1], evenGcd = a[0];
    for (int i = 0; i < n; i++)
    {
        if (i % 2)
        {
            oddGcd = gcd(a[i], oddGcd);
        }
        else
        {
            evenGcd = gcd(a[i], evenGcd);
        }
    }

    bool flag1 = true, flag2 = true;
    for (int i = 0; i < n; i += 2)
    {
        if (a[i] % oddGcd == 0)
        {
            flag1 = false;
        }
    }
    for (int i = 1; i < n; i += 2)
    {
        if (a[i] % evenGcd == 0)
        {
            flag2 = false;
        }
    }
    if (flag1 && flag2)
    {
        cout << max(oddGcd, evenGcd) << endl;
    }
    else if (flag1)
    {
        cout << oddGcd << endl;
    }
    else if (flag2)
    {
        cout << evenGcd << endl;
    }
    else
    {
        cout << 0 << endl;
    }
    // cout << oddGcd << " " << evenGcd << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}