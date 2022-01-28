#include <iostream>
#include <fstream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <bitset>
#include <set>
#include <map>
#include <vector>
#include <cmath>
#include <string>
#include <cstring>
#include <queue>
#include <math.h>
#include <iomanip>
using namespace std;

#define FOR0(i, n) for (i = 0; i < n; i++)
#define FOR1(i, n) for (i = 1; i <= n; i++)
#define sys_p system("pause")
#define End return 0
#define pb push_back
#define mp make_pair

ifstream Cin("input.txt");
ofstream Cout("output.txt");

typedef long long ll;
typedef unsigned long long ull;

ll t[4 * 2 * 100000 + 1];

void update(ll v, ll tl, ll tr, ll l, ll r, ll add)
{
    if (l > r)
        return;
    if (l == tl && tr == r)
    {
        cout << v << endl;
        t[v] += add;
    }
    else
    {
        ll tm = (tl + tr) / 2;
        update(v * 2, tl, tm, l, min(r, tm), add);
        update(v * 2 + 1, tm + 1, tr, max(l, tm + 1), r, add);
    }
}

ll get(ll v, ll tl, ll tr, ll pos)
{
    if (tl == tr)
        return t[v];
    ll tm = (tl + tr) / 2;
    if (pos <= tm)
        return t[v] + get(v * 2, tl, tm, pos);
    else
        return t[v] + get(v * 2 + 1, tm + 1, tr, pos);
}

int main()
{
    ll n, q, i, l, rr, an = 0;
    cin >> n >> q;
    vector<ll> r(n), x(n);
    FOR0(i, n)
    cin >> r[i];
    sort(r.begin(), r.end());
    FOR0(i, q)
    {
        cin >> l >> rr;
        update(1LL, 1LL, n, l, rr, 1LL);
        for (int i = 0; i < 2 * n; i++)
        {
            cout << t[i] << " ";
        }
    }
    cout << endl;
    FOR1(i, n)
    x[i - 1] = get(1LL, 1LL, n, i);
    sort(x.begin(), x.end());
    FOR0(i, n)
    an += x[i] * r[i];
    cout << an;
}
