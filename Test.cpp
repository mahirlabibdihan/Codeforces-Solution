#include <iostream>
#include <vector>
using namespace std;
vector<vector<bool>> visited(21, vector<bool>(21));
vector<vector<int>> dp(21, vector<int>(21));
vector<vector<int>> a(21, vector<int>(21));
int n;
int dfs(int i, int j)
{
    cout << i << " " << j << endl;
    if (i >= n || j >= n)
    {
        return 0;
    }
    if (visited[i][j])
    {
        return dp[i][j];
    }
    visited[i][j] = true;
    dp[i][j] = dfs(i + 1, j) + dfs(i, j + 1) + dfs(i + 1, j + 1);
    return dp[i][j];
}
void solve()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            visited[i][j] = false;
            dp[i][j] = 0;
        }
    }
    dfs(0, 0);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum += dp[i][j];
        }
    }
    cout << sum << endl;
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