#include <iostream>
#include <vector>
#include <cmath>
typedef long long ll;
using namespace std;

int main()
{
    ll n, m, k;
    cin >> n >> m >> k;
    vector<ll> p(m);

    for (int i = 0; i < m; i++)
    {
        cin >> p[i];
    }
    ll left = 0;
    int steps = 0;
    int j = 0;
    ll i = ceil(1.0 * (p[j] - left) / k) - 1;
    for (; j < m; i = ceil(1.0 * (p[j] - left) / k) - 1)
    {
        int c = 0;
        for (; p[j] <= (i + 1) * k + left && j < m; j++)
        {
            c++;
        }
        left += c;
        steps++;
    }
    cout << steps << endl;
}