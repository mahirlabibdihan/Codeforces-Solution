#include <iostream>
#include <climits>
using namespace std;
typedef long long ll;

void solve()
{
    int m, n;
    cin >> m >> n;
    int p[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> p[i][j];
        }
    }
    bool visit[m] = {};
    int shopCount = 0;
    int minColMax = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int maxIdx = 0;
        for (int j = 0; j < m; j++)
        {
            if (p[maxIdx][i] < p[j][i])
            {
                maxIdx = j;
            }
        }
        minColMax = min(minColMax, p[maxIdx][i]);
        if (!visit[maxIdx])
        {
            visit[maxIdx] = true;
            shopCount++;
        }
    }

    if (shopCount <= min(m, n - 1))
    {
        cout << minColMax << endl;
    }
    else
    {
        int maxRowSecMax = 0;
        for (int i = 0; i < m; i++)
        {
            int maxIdx = 0, secMaxIdx = -1;
            for (int j = 1; j < n; j++)
            {
                if (p[i][maxIdx] < p[i][j])
                {
                    secMaxIdx = maxIdx;
                    maxIdx = j;
                }
                else if (secMaxIdx == -1)
                {
                    secMaxIdx = j;
                }
                else if (p[i][secMaxIdx] < p[i][j])
                {
                    secMaxIdx = j;
                }
            }
            maxRowSecMax = max(maxRowSecMax, p[i][secMaxIdx]);
        }
        cout << min(minColMax, maxRowSecMax) << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}