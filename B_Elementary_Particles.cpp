#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

void solve()
{
    vector<int> visit(150000 + 1, -1);
    int n;
    cin >> n;
    vector<int> a(n);
    int result = -1;
    for (int &i : a)
    {
        cin >> i;
    }
    for (int i = 0; i < n; i++)
    {
        if (visit[a[i]] == -1)
        {
            visit[a[i]] = i;
        }
        else
        {
            result = max(result, n - i + visit[a[i]]);
            visit[a[i]] = i;
        }
    }
    cout << result << endl;
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
