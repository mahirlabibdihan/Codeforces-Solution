#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

// O(n^2)
vector<int> solve(vector<int> t, int n, int m)
{
    vector<int> result(n);
    vector<pair<int, int>> sorted(n);

    for (int i = 0; i < n; i++)
    {
        sorted[i] = {t[i], i};
    }
    sort(sorted.begin(), sorted.end());

    for (int i = 0; i < n; i++)
    {
        int s = t[i];
        result[i] = i;
        for (int j = 0; j < n; j++)
        {
            if (sorted[j].second < i)
            {
                if (s + sorted[j].first <= m)
                {
                    s += sorted[j].first;
                    result[i]--;
                }
                else
                {
                    break;
                }
            }
        }
    }
    return result;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<int> t(n);
    for (int &i : t)
    {
        cin >> i;
    }
    vector<int> result = solve(t, n, m);
    for (int i : result)
    {
        cout << i << " ";
    }
}