#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    vector<int> p(n);
    for (int &i : p)
    {
        cin >> i;
    }
    string s;
    cin >> s;
    vector<pair<int, int>> one, zero;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            zero.push_back({p[i], i + 1});
        }
        else
        {
            one.push_back({p[i], i + 1});
        }
    }
    sort(zero.begin(), zero.end());
    sort(one.begin(), one.end());
    int zeroCount = zero.size();
    int oneCount = one.size();
    map<int, int> zeroMap, oneMap;
    for (int i = 0; i < zeroCount; i++)
    {
        zero[i].first = i + 1;
        zeroMap[zero[i].second] = i + 1;
    }
    for (int i = 0; i < oneCount; i++)
    {
        one[i].first = zeroCount + i + 1;
        oneMap[one[i].second] = zeroCount + i + 1;
    }

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            cout << zeroMap[i + 1] << " ";
        }
        else
        {
            cout << oneMap[i + 1] << " ";
        }
    }
    cout << endl;
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