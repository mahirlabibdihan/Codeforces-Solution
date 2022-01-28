#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define FASTIO ios::sync_with_stdio(0), cin.tie(nullptr)
typedef long long int64;
typedef unsigned long long uint64;

int64 mod = 100000, d = 1;
bool cmp(pair<int64, int> a, pair<int64, int> b)
{
    if (((a.first / d) % mod) == ((b.first / d) % mod))
    {
        return a.second < b.second;
    }
    return ((a.first / d) % mod) < ((b.first / d) % mod);
}

int main()
{
    FASTIO;
    int64 n;
    cin >> n;
    vector<int64>
        a(n);
    for (int64 &i : a)
    {
        cin >> i;
    }
    vector<int64> sorted;
    for (int i = 1; i < 4; i++, d *= mod)
    {
        vector<pair<int64, int>> unsorted;
        for (int i = 0; i < n; i++)
        {
            if (a[i] <= d)
            {
                sorted.push_back(a[i]);
            }
            else
            {
                unsorted.push_back({a[i], i});
            }
        }
        if (unsorted.empty())
        {
            break;
        }
        sort(unsorted.begin(), unsorted.end(), cmp);
        for (int64 i : sorted)
        {
            cout << i << " ";
        }
        for (pair<int64, int> i : unsorted)
        {
            cout << i.first << " ";
        }
        cout << "\n";
        for (int i = 0; i < n; i++)
        {
            a[i] = unsorted[i].first;
        }
    }
}

/*
3
213456789 167890 123456789
*/
/*
4
33111111 1235 1234 12322222
*/