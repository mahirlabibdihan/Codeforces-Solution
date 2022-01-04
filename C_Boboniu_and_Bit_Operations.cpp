#include <iostream>
#include <climits>
using namespace std;
// a[i]&b[j] <= min(a[i],b[j])
// a[i]|b[j] >= max(a[i],b[j])
// a[i]|b[j] = x -> a[i]|b[j] = x
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    int i, j, k;
    for (k = 0; k < (1 << 9); k++)
    {
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                if (((a[i] & b[j]) | k) == k)
                {
                    break;
                }
            }
            if (j == m)
            {
                break;
            }
        }
        if (i == n)
        {
            cout << k << endl;
            return 0;
        }
    }
}