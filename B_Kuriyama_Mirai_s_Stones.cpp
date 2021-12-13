#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long u[n + 1] = {}, v[n + 1] = {};
    for (int i = 0; i < n; i++)
    {
        v[i + 1] = a[i] + v[i];
    }
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {

        u[i + 1] = a[i] + u[i];
    }
    int m;
    cin >> m;
    while (m--)
    {
        int type, l, r;
        cin >> type >> l >> r;
        if (type == 1)
        {
            cout << v[r] - v[l - 1] << endl;
        }
        else
        {
            cout << u[r] - u[l - 1] << endl;
        }
    }
}