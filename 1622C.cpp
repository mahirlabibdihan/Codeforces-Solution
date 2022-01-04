#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    ll sum = 0;
    for (ll &i : a)
    {
        cin >> i;
        sum += i;
    }
    sort(a.begin(), a.end());
    if (sum <= k)
    {
        cout << 0 << endl;
        return;
    }
    ll lastStepCount = sum;
    ll stepCount = 0;
    ll newSum = sum;
    ll _min = a[0];
    while (true)
    {
        for (int i = n - 1; i > 0 && newSum > k && a[i] > _min; i--, stepCount++)
        {
            newSum -= a[i] - _min;
            cout << a[i] - _min << " ";
        }
        cout << a[0] - _min << endl;
        if (newSum <= k)
        {
            if (lastStepCount <= stepCount)
            {
                cout << lastStepCount << endl;
                return;
            }
            lastStepCount = stepCount;
        }
        // cout << newSum << " " << stepCount << endl;
        _min--;
        stepCount = a[0] - _min;
        newSum = sum - stepCount;
    }
    // cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}