#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct Move
{
    int l, r, d;
};
vector<Move> solve(vector<int> &a, int n)
{
    vector<Move> result;
    for (int i = 0; i < n; i++)
    {
        int minIdx = i;
        for (int j = i; j < n; j++)
        {
            if (a[minIdx] > a[j])
            {
                minIdx = j;
            }
        }
        if (minIdx != i)
        {
            result.push_back({i + 1, n, minIdx - i});
            rotate(a.begin() + i, a.begin() + minIdx, a.end());
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
        vector<Move> result = solve(a, n);
        cout << result.size() << endl;
        for (Move i : result)
        {
            cout << i.l << " " << i.r << " " << i.d << endl;
        }
    }
}