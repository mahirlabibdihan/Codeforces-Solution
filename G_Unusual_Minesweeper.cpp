#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

//Compiler version g++ 6.3.0
struct Point
{
    int x, y;
};
bool operator<(const Point &a, const Point &b)
{
    return (a.x < b.x || (a.x == b.x && a.y < b.y));
}
struct Mine
{
    Point p;
    int t;
};
bool cmp(Mine a, Mine b)
{
    return a.t > b.t;
}

void explode(Point p, map<Point, vector<Point>> &adj, map<Point, bool> &mineMap)
{
    if (!mineMap[p])
    {
        return;
    }
    mineMap[p] = false;
    for (Point i : adj[p])
    {
        if (mineMap[i])
        {
            explode(i, adj, mineMap);
        }
    }
}

Point getMin(Point p, map<Point, vector<Point>> &adj, map<Point, int> &mines, map<Point, bool> &visit)
{
    visit[p] = true;
    Point _min = p;
    for (Point i : adj[p])
    {
        if (!visit[i])
        {
            Point tmp = getMin(i, adj, mines, visit);
            if (mines[tmp] < mines[_min])
            {
                _min = tmp;
            }
        }
    }
    return _min;
}
int solve(map<Point, int> &mines, int k)
{
    map<int, vector<int>> xMap, yMap;

    for (auto m : mines)
    {
        xMap[m.first.x].push_back(m.first.y);
        yMap[m.first.y].push_back(m.first.x);
    }

    map<Point, vector<Point>> adj;
    // Making graphs by traversing x axis
    for (auto x : xMap)
    {
        sort(x.second.begin(), x.second.end());
        for (int i = 1; i < x.second.size(); i++)
        {
            if (x.second[i] - x.second[i - 1] <= k)
            {
                adj[{x.first, x.second[i]}].push_back({x.first, x.second[i - 1]});
                adj[{x.first, x.second[i - 1]}].push_back({x.first, x.second[i]});
            }
        }
    }

    // Making graphs by traversing y axis
    for (auto y : yMap)
    {
        sort(y.second.begin(), y.second.end());
        for (int i = 1; i < y.second.size(); i++)
        {
            if (y.second[i] - y.second[i - 1] <= k)
            {
                adj[{y.second[i], y.first}].push_back({y.second[i - 1], y.first});
                adj[{y.second[i - 1], y.first}].push_back({y.second[i], y.first});
            }
        }
    }

    map<Point, bool> visit;
    // Collecting the mine with minimum life from every disconnected graph
    vector<Mine> minesToBeExploded;
    for (auto m : mines)
    {
        if (!visit[m.first])
        {
            Point tmp = getMin(m.first, adj, mines, visit);
            minesToBeExploded.push_back({tmp, mines[tmp]});
        }
    }
    sort(minesToBeExploded.begin(), minesToBeExploded.end(), cmp);

    // Exploded all the mines that we collected in previous step from maximum life to minimum.
    // Until life is smaller than current time
    int timer = -1;
    for (Mine m : minesToBeExploded)
    {
        if (visit[m.p])
        {
            if (timer < m.t)
            {
                explode(m.p, adj, visit);
                timer++;
            }
            else
            {
                break;
            }
        }
    }

    return max(timer, 0);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        map<Point, int> mines;
        for (int i = 0; i < n; i++)
        {
            int x, y, t;
            cin >> x >> y >> t;
            mines[{x, y}] = t;
        }
        cout << solve(mines, k) << endl;
    }
}