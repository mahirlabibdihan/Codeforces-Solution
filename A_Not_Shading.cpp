#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll n, m, r, c;
    cin >> n >> m >> r >> c;
    vector<vector<char>> g(n, vector<char>(m));
    vector<bool> existR(n), existC(m);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> g[i][j];
            if (g[i][j] == 'B')
            {
                existR[i] = true;
                existC[j] = true;
            }
        }
        if (existR[i])
            count++;
    }
    if (count == 0)
    {
        cout << -1 << endl;
    }
    else if (g[r - 1][c - 1] == 'B')
    {
        cout << 0 << endl;
    }
    else if (existR[r - 1] || existC[c - 1])
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 2 << endl;
    }
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
