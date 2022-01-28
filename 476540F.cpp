#include <iostream>
#include <climits>
#include <vector>
#include <map>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    map<int, int> aIdx, bIdx;
    for (int &i : a)
    {
        cin >> i;
    }
    for (int &i : b)
    {
        cin >> i;
    }
    for (int i = 0; i < n; i++)
    {
        aIdx[a[i]] = i;
        bIdx[b[i]] = i;
    }
    int _min = INT_MAX;
    int minOddIdx = INT_MAX;
    for (int i = 2; i <= 2 * n; i += 2)
    {
        minOddIdx = min(minOddIdx, aIdx[i - 1]);
        _min = min(_min, bIdx[i] + minOddIdx);
    }
    cout << _min << endl;
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
