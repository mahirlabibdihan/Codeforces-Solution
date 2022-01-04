#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <map>
#define ll long long
using namespace std;
map<int, bool> visit;

int count(int pos, map<int, int> &adj)
{
    if (visit[pos])
    {
        return 0;
    }
    visit[pos] = true;
    int c = 1;
    if (adj[pos] != -1)
    {
        if (!visit[adj[pos]])
        {
            c += count(adj[pos], adj);
        }
    }
    return c;
}
int solve(vector<int> a, int k)
{
    map<int, int> adj;
    for (int i : a)
    {
        adj[i] = -1;
    }
    for (int i : a)
    {
        if (i % k == 0)
        {
            if (adj[i / k] == -1)
            {
                adj[i / k] = i;
                // cout << (i / k) << "->" << i << "=" << adj[i / k] << endl;
            }
        }
    }
    sort(a.begin(), a.end());
    int result = 0;
    for (int i : a)
    {
        if (!visit[i])
        {
            int c = count(i, adj);
            result += ceil(c / 2.0);
        }
    }
    return result;
}
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int &i : a)
    {
        cin >> i;
    }
    cout << solve(a, k) << endl;
}
/*
24 72
56 168
63 189
20 60
28 84
33 99
57 171
40 120
13 38 137 46 192 8 170 141 118 198 133 112 176 36 91 130 166 123 82 180 134 52 64 107 97 79 199 184 158 22 181 163 98 7 88 41 73 87 167 109 15 173 153 70 50 119 139  17 152  161 11 116 31 187 143 196 27 102 132 126 149  146  67 48 53   105 155 10 128 47 23 6 94 3 113 65 44 179   75 34 111 193  145  77
*/
