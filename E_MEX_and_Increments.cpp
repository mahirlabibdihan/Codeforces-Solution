#include <iostream>
#include <climits>
#include <stack>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int count[n + 1] = {};
    for (int i = 0; i < n; i++)
    {
        count[a[i]]++;
    }
    stack<pair<int, int>> carry;
    ll carrySum = 0;
    int i;
    for (i = 0; i <= n; i++)
    {
        cout << carrySum + count[i] << " ";
        if (count[i] > 1)
        {
            carry.push(make_pair(i, count[i] - 1));
        }
        else if (count[i] == 0)
        {
            if (carry.empty())
            {
                break;
            }
            else
            {
                carrySum += i - carry.top().first;
                carry.top().second--;
                if (carry.top().second == 0)
                    carry.pop();
            }
        }
    }
    for (++i; i <= n; i++)
    {
        cout << -1 << " ";
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}