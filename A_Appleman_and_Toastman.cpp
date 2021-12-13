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

    sort(a, a + n);

    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }

    long long ans = sum;
    for (int i = 0; i < n - 1; i++)
    {
        ans += sum;
        sum -= a[i];
    }

    cout << ans;
}