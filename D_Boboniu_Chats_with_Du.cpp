#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long
using namespace std;

ll solve(vector<ll> a, ll n, ll d, ll m)
{
    sort(a.begin(), a.end());
    int pivot = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] <= m)
        {
            pivot = i;
        }
    }
    // cout << pivot << endl;
    int maxAngry = 0;
    int totalAngry = n - pivot - 1;
    for (int i = n - 1, j = 0; i > pivot; i--, j += d)
    {
        if (j + d > i)
        {
            if (i >= j)
            {
                maxAngry++;
            }
            break;
        }
        maxAngry++;
    }
    int minAngry = 0;
    for (int i = n - 1, j = pivot + 1; i > pivot; i--, j += d)
    {
        // cout << j << " " << i << endl;
        if (j + d > i)
        {
            if (i >= j)
            {
                minAngry++;
            }
            break;
        }
        minAngry++;
    }
    // cout << maxAngry << " " << minAngry << endl;

    // cout << maxAngry << endl;
    // Number of angry in the sum
    // minAngry<= <=maxAngry
    ll result = 0;
    for (int i = minAngry; i <= maxAngry; i++)
    {
        ll sum = 0;
        for (int j = 0; j < i; j++)
        {
            sum += a[n - j - 1];
        }
        for (int j = max(0LL, d * (i - 1) - (totalAngry - i)); j <= pivot; j++)
        {
            sum += a[j];
        }
        result = max(result, sum);
    }
    return result;
}
int main()
{
    ll n, d, m;
    cin >> n >> d >> m;
    vector<ll> a(n);
    for (ll &i : a)
    {
        cin >> i;
    }
    ll result = solve(a, n, d, m);
    cout << result << endl;
}