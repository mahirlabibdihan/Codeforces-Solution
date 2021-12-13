#include <iostream>
#include <string.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    int b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    int p[n];
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    int dist[n] = {}, w[n];

    int lastMax = -1;
    memset(dist, -1, sizeof(dist));
    for (int i = 0; i < n; i++)
    {
        // cout << p[i] << " " << b[p[i] - 1] << " " << dist[b[p[i] - 1]] << endl;
        if (p[i] == b[p[i] - 1])
        {
            dist[p[i] - 1] = 0;
            w[p[i] - 1] = 0;
            lastMax = 0;
        }
        else if (dist[b[p[i] - 1] - 1] >= 0)
        {
            dist[p[i] - 1] = ++lastMax;
            w[p[i] - 1] = dist[p[i] - 1] - dist[b[p[i] - 1] - 1];
        }
        else
        {
            cout << -1 << endl;
            return;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << w[i] << " ";
    }
    cout << endl;
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