#include <iostream>
#include <vector>
#include <map>
using namespace std;
typedef long long ll;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(n), c(m);
    for (int &i : a)
    {
        cin >> i;
    }
    for (int &i : b)
    {
        cin >> i;
    }
    for (int &i : c)
    {
        cin >> i;
    }
    map<int, vector<int>> d, f;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            d[b[i]].push_back(i + 1);
        }
        else
        {
            f[b[i]].push_back(i + 1);
        }
    }
    vector<int> e(m, -1);
    int lastI = -1;
    for (int i = m - 1; i >= 0; i--)
    {
        if (d.find(c[i]) != d.end() && d[c[i]].size() > 0)
        {
            lastI = e[i] = d[c[i]].back();
            d[c[i]].pop_back();
        }
        else
        {
            if (lastI == -1)
            {
                if (f.find(c[i]) != f.end() && f[c[i]].size() > 0)
                {
                    lastI = e[i] = f[c[i]].back();
                    f[c[i]].pop_back();
                }
            }
            else
            {
                e[i] = lastI;
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        if (e[i] == -1)
        {
            cout << "NO" << endl;
            return;
        }
    }
    for (auto i : d)
    {
        if (i.second.size() > 0)
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
    for (int i = 0; i < m; i++)
    {
        cout << e[i] << " ";
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
