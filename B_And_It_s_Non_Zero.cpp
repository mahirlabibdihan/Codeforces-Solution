#include <iostream>
using namespace std;

// Counts the total numbers from 1 to n that has 1 at i-th bit -> O(1)
int count(int n, int i)
{
    int a = 1 << i;
    int ans = a * ((n + 1) / (2 * a));
    if ((n / a) % 2)
    {
        ans += (n + 1) % a;
    }
    return ans;
}

// O(logr)
int solve(int l, int r)
{
    int ans = 0;
    for (int i = 0; (1 << i) <= r; i++)
    {
        ans = max(ans, count(r, i) - count(l - 1, i));
    }
    return (r - l + 1) - ans;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        cout << solve(l, r) << endl;
    }
}