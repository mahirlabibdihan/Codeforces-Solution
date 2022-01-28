//DIHU
#include <iostream>
#include <vector>
#include <map>
typedef long long ll;
using namespace std;
struct Point
{
    int x, y;
};
int main()
{
    int n;
    cin >> n;
    map<int, int> xMap, yMap;
    map<pair<int, int>, int> xyMap;
    ll xCount = 0, yCount = 0, xyCount = 0;
    while (n--)
    {
        int x, y;
        cin >> x >> y;
        if (xMap.find(x) == xMap.end())
        {
            xMap[x] = 0;
        }
        xCount += xMap[x];
        xMap[x]++;
        if (yMap.find(y) == yMap.end())
        {
            yMap[y] = 0;
        }
        yCount += yMap[y];
        yMap[y]++;
        if (xyMap.find({x, y}) == xyMap.end())
        {
            xyMap[{x, y}] = 0;
        }
        xyCount += xyMap[{x, y}];
        xyMap[{x, y}]++;
    }
    cout << xCount + yCount - xyCount << endl;
}