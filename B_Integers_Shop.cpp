#include <iostream>
#include <vector>
#include <map>
using namespace std;
typedef long long ll;

struct Segment
{
    int l, r, c;
};
void solve()
{
    int n;
    cin >> n;
    vector<Segment> s(n), range(n);
    map<int, int> lMap, rMap;
    map<pair<int, int>, int> lrMap;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i].l >> s[i].r >> s[i].c;

        if (i == 0)
        {
            range[i].l = s[i].l;
            range[i].r = s[i].r;
        }
        else
        {
            range[i].l = min(s[i].l, range[i - 1].l);
            range[i].r = max(s[i].r, range[i - 1].r);
        }

        if (lMap.find(s[i].l) == lMap.end())
        {
            lMap[s[i].l] = i;
        }
        else if (s[i].c < s[lMap[s[i].l]].c)
        {
            lMap[s[i].l] = i;
        }
        if (rMap.find(s[i].r) == rMap.end())
        {
            rMap[s[i].r] = i;
        }
        else if (s[i].c < s[rMap[s[i].r]].c)
        {
            rMap[s[i].r] = i;
        }
        if (lrMap.find({s[i].l, s[i].r}) == lrMap.end())
        {
            lrMap[{s[i].l, s[i].r}] = i;
        }
        else if (s[i].c < s[lrMap[{s[i].l, s[i].r}]].c)
        {
            lrMap[{s[i].l, s[i].r}] = i;
        }
        int lC = lMap[range[i].l];
        int rC = rMap[range[i].r];
        if (lC == rC)
        {
            range[i].c = s[lC].c;
        }
        else
        {
            range[i].c = s[lC].c + s[rC].c;
        }
        if (lrMap.find({range[i].l, range[i].r}) != lrMap.end())
        {
            range[i].c = min(range[i].c, s[lrMap[{range[i].l, range[i].r}]].c);
        }
        cout << range[i].c << endl;
    }
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