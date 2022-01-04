#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
vector<pair<int, int>> solve(vector<int> &a)
{
    int n = a.size();
    vector<pair<int, int>> result;
    vector<pair<int, int>> sorted;
    int sum = 0;
    int _max = 0;
    for (int i : a)
    {
        sum += i;
        _max = max(_max, i);
    }
    for (int i = 0; i < n; i++)
    {
        sorted.push_back({a[i], i + 1});
    }
    sort(sorted.begin(), sorted.end());
    vector<int> aList;
    for (int i = 0; i < n; i++)
    {
        while (sorted[i].first--)
        {
            aList.push_back(sorted[i].second);
        }
    }
    if (_max <= ceil(sum / 2.0))
    {
        for (int i = 0; i < sum / 2; i++)
        {
            result.push_back({aList[i], aList[i + sum / 2]});
        }
    }
    else
    {
        for (int i = 0; i < sum - _max; i++)
        {
            result.push_back({aList[i], aList[i + sum - _max]});
        }
    }
    return result;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &i : a)
        {
            cin >> i;
        }
        vector<pair<int, int>> result = solve(a);
        cout << result.size() << endl;
        for (pair<int, int> i : result)
        {
            cout << i.first << " " << i.second << endl;
        }
    }
}