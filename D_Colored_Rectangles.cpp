#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>
#include <map>
using namespace std;

//Compiler version g++ 6.3.0

map<tuple<int, int, int>, bool> visited;
map<tuple<int, int, int>, int> dp;
vector<int> r, g, b;
int solve(int iR, int iG, int iB)
{
    int &area = dp[{iR, iG, iB}];
    if (visited[{iR, iG, iB}])
        return area;
    visited[{iR, iG, iB}] = true;

    if (iG >= 0 && iB >= 0)
    {
        area = max(area, g[iG] * b[iB] + solve(iR, iG - 1, iB - 1));
    }
    if (iR >= 0 && iB >= 0)
    {
        area = max(area, r[iR] * b[iB] + solve(iR - 1, iG, iB - 1));
    }
    if (iR >= 0 && iG >= 0)
    {
        area = max(area, r[iR] * g[iG] + solve(iR - 1, iG - 1, iB));
    }
    return area;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    int nR, nG, nB;
    cin >> nR >> nG >> nB;

    vector<int> r(nR), g(nG), b(nB);

    for (int &i : r)
        cin >> i;
    for (int &i : g)
        cin >> i;
    for (int &i : b)
        cin >> i;

    sort(r.begin(), r.end());
    sort(g.begin(), g.end());
    sort(b.begin(), b.end());

    ::r = r;
    ::g = g;
    ::b = b;

    cout << solve(nR - 1, nG - 1, nB - 1);
}