#include <iostream>
#include <climits>
using namespace std;
#define ll long long
/* Returns length of LCS for X[0..m-1], Y[0..n-1] */
int solve(string s)
{
    string t;
    int n = s.length(), m;
    int result = INT_MAX;
    for (ll i = 1; i <= 10000000000000000LL; i <<= 1)
    {
        t = to_string(i);
        m = t.length();
        int c, j;
        for (c = 0, j = 0; c < m && j < n; j++)
        {
            if (s[j] == t[c])
            {
                c++;
            }
        }
        result = min(n + m - 2 * c, result);
    }
    return result;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << solve(s) << endl;
    }
}