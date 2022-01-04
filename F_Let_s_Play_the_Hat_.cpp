#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void solve(int n, int m, int k)
{
    int sub = 0;
    int biggerCount = 0;
    for (int i = 0; i < m; i++)
    {
        if (n - biggerCount * ceil(1.0 * n / m) > (m - i) * floor(1.0 * n / m))
        {
            biggerCount++;
        }
        else
        {
            break;
        }
    }

    while (k--)
    {
        int playerCount = 0;
        int tableCount = 0;
        for (int j = 0; j < m; j++)
        {
            if (n - playerCount > (m - tableCount) * floor(1.0 * n / m))
            {
                cout << ceil(1.0 * n / m) << " ";
                for (int i = playerCount + 1; i <= playerCount + ceil(1.0 * n / m); i++)
                {
                    cout << ((i - sub + n - 1) % n) + 1 << " ";
                }
                playerCount += ceil(1.0 * n / m);
            }
            else
            {
                cout << floor(1.0 * n / m) << " ";
                for (int i = playerCount + 1; i <= playerCount + floor(1.0 * n / m); i++)
                {
                    cout << ((i - sub + n - 1) % n) + 1 << " ";
                }
                playerCount += floor(1.0 * n / m);
            }
            cout << endl;
            tableCount++;
        }
        sub = (sub + biggerCount * int(ceil(1.0 * n / m))) % n;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        solve(n, m, k);
        cout << endl;
    }
}