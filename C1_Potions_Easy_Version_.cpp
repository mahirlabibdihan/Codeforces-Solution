#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int ans;
// Function to find the length of the
// longest subsequence with non negative
// prefix sum at each position
void longestSubsequence(int *arr, int N)
{
    // Stores the maximum sum possible
    // if we include j elements till
    // the position i
    long long dp[N][N + 1];

    // Initialize dp array with -1
    memset(dp, -1, sizeof dp);

    // Maximum subsequence sum by
    // including no elements till
    // position 'i'
    for (int i = 0; i < N; ++i)
    {
        dp[i][0] = 0;
    }

    // Maximum subsequence sum by
    // including first element at
    // first position
    dp[0][1] = (arr[0] >= 0 ? arr[0] : -1);

    // Iterate over all the remaining
    // positions
    for (int i = 1; i < N; ++i)
    {
        for (int j = 1; j <= (i + 1); ++j)
        {

            // If the current element is excluded
            if (dp[i - 1][j] != -1)
            {
                dp[i][j] = max(dp[i][j], dp[i - 1][j]);
            }

            // If current element is
            // included and if total
            // sum is positive or not
            if (dp[i - 1][j - 1] != -1 && dp[i - 1][j - 1] + arr[i] >= 0)
            {
                dp[i][j] = max(dp[i][j], dp[i - 1][j - 1] + arr[i]);
            }
        }
    }

    int ans = 0;

    // Select the maximum j by which
    // a non negative prefix sum
    // subsequence can be obtained
    for (int j = 0; j <= N; ++j)
    {
        if (dp[N - 1][j] >= 0)
        {
            ans = j;
        }
    }
    // Print the answer
    cout << ans << endl;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    longestSubsequence(a, n);
}