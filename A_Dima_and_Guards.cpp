#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[4], b[4], c[4], d[4];

    int ans = -1;
    for (int i = 0; i < 4; i++)
    {
        cin >> a[i] >> b[i] >> c[i] >> d[i];
        if (min(a[i], b[i]) + min(c[i], d[i]) <= n)
        {
            ans = i;
        }
    }
    if (ans == -1)
    {
        cout << ans;
    }
    else
    {
        cout << ans + 1 << " " << min(a[ans], b[ans]) << " " << n - min(a[ans], b[ans]);
    }
}