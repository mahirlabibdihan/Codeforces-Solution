#include <iostream>
#include <vector>
#include <map>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, int> adjDiff;
    int result = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i > 0)
        {
            adjDiff[a[i] - a[i - 1]]++;
            result = max(result, adjDiff[a[i] - a[i - 1]]);
        }
    }
    cout << max(n - result - 1, 0) << endl;
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