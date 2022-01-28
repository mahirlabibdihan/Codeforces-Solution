#include <iostream>
#include <vector>
#include <map>
using namespace std;
typedef long long ll;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> adj(n + 1, 0);
    for (int &i : a)
    {
        cin >> i;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = a[i]; j > 0; j /= 2)
        {
            if (j <= n && !adj[j])
            {
                adj[j] = 1;
                break;
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (!adj[i])
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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