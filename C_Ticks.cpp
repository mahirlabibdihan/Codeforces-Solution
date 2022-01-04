#include <iostream>
#include <vector>
using namespace std;

void traverse(int i, int j, vector<vector<char>> &s, int k, int &count, vector<vector<bool>> &visit)
{
    int n = s.size();
    int m = s[0].size();
    int d = 0;
    while (true)
    {
        if (i - d >= 0 && j - d >= 0 && j + d < m)
        {
            if (s[i - d][j - d] == '*' && s[i - d][j + d] == '*')
            {
                d++;
                continue;
            }
        }
        break;
    }
    // cout << i << " " << j << " " << d << endl;
    if (d > k)
    {
        for (int p = 0; p < d; p++)
        {
            if (!visit[i - p][j - p])
            {
                count--;
                visit[i - p][j - p] = true;
            }
            if (!visit[i - p][j + p])
            {
                count--;
                visit[i - p][j + p] = true;
            }
        }
    }
}
bool solve(vector<vector<char>> &s, int k)
{
    int n = s.size();
    int m = s[0].size();
    int count = 0;
    vector<vector<bool>> visit(n, vector<bool>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (s[i][j] == '*')
            {
                count++;
                traverse(i, j, s, k, count, visit);
            }
        }
    }
    return count == 0;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        vector<vector<char>> s(n, vector<char>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> s[i][j];
            }
        }
        if (solve(s, k))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}