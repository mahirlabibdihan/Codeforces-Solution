// Minimum XOR
#include <iostream>
#include <map>
#include <vector>
using namespace std;
typedef long long ll;

int result;
void dfs(vector<int> v, int mask)
{
    if (!mask)
        return;
    int n = v.size();
    vector<int> one, zero;
    for (int i = 0; i < n; i++)
    {
        if (mask & v[i])
        {
            one.push_back(v[i]);
        }
        else
        {
            zero.push_back(v[i]);
        }
    }
    if (one.size() == 2)
    {
        result = min(result, one[0] ^ one[1]);
    }
    else if (one.size() > 2)
    {
        dfs(one, mask >> 1);
    }

    if (zero.size() == 2)
    {
        result = min(result, zero[0] ^ zero[1]);
    }
    else if (zero.size() > 2)
    {
        dfs(zero, mask >> 1);
    }
}
void solve()
{
    bool duplicate = false;
    map<int, int> visit;
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (visit[a[i]])
        {
            duplicate = true;
        }
        visit[a[i]] = true;
    }
    if (duplicate)
    {
        cout << 0 << endl;
    }
    else
    {
        result = 1 << 30;
        dfs(a, 1 << 30);
        cout << result << endl;
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
