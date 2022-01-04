#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
ll solve(vector<ll> a, ll k)
{
    ll n = a.size();
    sort(a.begin(), a.end());
    ll _min = min(a[0], k / n);
    ll sum = 0;
    for (ll i : a)
    {
        sum += i;
    }
    sum -= a[0];
    int i;
    for (i = n - 1; sum + (n - i) * _min > k && a[i] > _min; i--)
    {
        sum -= a[i];
    }
    ll result = a[0] - _min + n - i - 1;
    while (i < n - 1)
    {
        int lastI = i;
        _min--;
        for (; i < n - 1; i++)
        {
            if (sum + a[i + 1] + _min * (n - i - 1) > k)
            {
                break;
            }
            sum += a[i + 1];
        }
        if (i == lastI)
        {
            break;
        }
        result = min(result, a[0] - _min + n - i - 1);
    }
    return result;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n);
        for (ll &i : a)
        {
            cin >> i;
        }
        cout << solve(a, k) << endl;
    }
}
/*
 1  1  1  2  2  3  6  6  8 10

 0  1  0  0  0  0  0  0  0  0
 1  0  1  2  2  3  6  6  8 10

-1  1  1  2  2 -1 -1 -1 -1 -1
 2  0  0  0  0  4  7  7  9 11

-2  1  1  2  2  3 -2 -2 -2 -2
 3  0  0  0  0  0  8  8 10 12

-3  1  1  2  2  3 -3 -3 -3 -3
 4  0  0  0  0  0  9  9 11 13

-4  1  1  2  2  3  6 -4 -4 -4
 5  0  0  0  0  0  0 10 12 14  
*/