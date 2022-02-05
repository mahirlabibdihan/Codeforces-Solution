// 0 0 2 3
// 3 4 2 1
// 1 0 0 0

// 0 2 1
// 0 1 2
// 3 0 0
#include <iostream>
#include <vector>
#include <map>
using namespace std;
#define FASTIO               \
    ios::sync_with_stdio(0); \
    cin.tie(nullptr);
typedef long long int64;
typedef unsigned long long uint64;
#define MAX 5000000
vector<int64> dp(MAX + 1, 0);
void initialize()
{
    for (int64 i = 1; i <= MAX; i++)
    {
        for (int64 j = i; j <= MAX; j += i)
        {
            dp[j]++;
        }
    }
}
void solve()
{
    int64 l, r;
    cin >> l >> r;
    map<int64, int64> c;
    int64 maxDiv = 0;
    int64 maxCount = 0;
    for (int64 i = l; i <= r; i++)
    {
        c[dp[i]]++;
        if (c[dp[i]] > maxCount)
        {
            maxCount = c[dp[i]];
            maxDiv = dp[i];
        }
    }
    cout << maxDiv << " " << maxCount << endl;
}
int main()
{
    FASTIO;
    initialize();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}