#include <iostream>
#include <vector>
using namespace std;
int solve(vector<int> a, int n)
{
    vector<vector<int>> dp(n + 1, vector<int>(n + 1, 1));
    for (int i = 1; i <= n; i++)
    {
        for (int j = i * 2; j <= n; j += i)
        {
            if (a[i - 1] < a[j - 1])
            {
                dp[i][j - 1] = max(dp[i][j - 1], dp[i - 1][j] + 1);
            }
            dp[n][n] = max(dp[i][j - 1], dp[n][n]);
        }
    }
    return dp[n][n];
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cout << solve(a, n) << endl;
    }
}