#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n], t[n];
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> t[i];
        if (t[i] == 1)
        {
            ans += a[i];
        }
    }
    int c = 0;
    for (int i = 0; i < k; i++)
    {
        if (t[i] == 0)
        {
            c += a[i];
        }
    }
    int sum = ans;
    ans = max(ans, sum + c);
    for (int i = 0; i < n - k; i++)
    {
        if (t[i] == 0)
        {
            c -= a[i];
        }
        if (t[i + k] == 0)
        {
            c += a[i + k];
        }
        ans = max(ans, sum + c);
    }
    cout << ans;
}