#include <iostream>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    int l = 0, r = 1000;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        l = max(l, min(a, b));
        r = min(r, max(a, b));
    }
    if (l > r)
    {
        cout << -1;
    }
    else if (x >= l && x <= r)
    {
        cout << 0;
    }
    else if (x <= l)
    {
        cout << l - x;
    }
    else
    {
        cout << x - r;
    }
}