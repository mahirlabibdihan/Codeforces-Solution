#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, s;
    cin >> n >> s;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n);
    long long ans = 0;
    if (a[n / 2] == s)
    {
        // cout << 0;
    }
    else if (a[n / 2] < s)
    {

        for (int i = n / 2; i < n; i++)
        {
            if (a[i] < s)
            {
                ans += s - a[i];
            }
            else
            {
                break;
            }
        }
    }
    else
    {
        for (int i = n / 2; i > -1; i--)
        {
            if (a[i] > s)
            {
                ans += a[i] - s;
            }
            else
            {
                break;
            }
        }
    }
    cout << ans;
}