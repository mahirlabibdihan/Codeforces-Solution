#include <iostream>
#include <algorithm>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    int n, q;
    cin >> n >> q;
    int a[200000];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int count[200000] = {};
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        for (int i = l - 1; i <= r - 1; i++)
        {
            count[i]++;
        }
    }
    sort(a, a + n);
    sort(count, count + n);

    long long result = 0;
    for (int i = 0; i < n; i++)
    {
        result += (long long)a[i] * count[i];
    }
    printf("%lld", result);
}