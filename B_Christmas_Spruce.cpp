#include <iostream>
#include <vector>
using namespace std;
bool ans = true;
void dfs(vector<vector<int>> child, int v)
{
    int c = 0;
    for (int i : child[v])
    {
        if (child[i].empty())
        {
            c++;
        }
        else
        {
            dfs(child, i);
        }
    }
    if (c < 3)
        ans = false;
}
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> child(n);
    for (int i = 1; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        child[tmp - 1].push_back(i);
    }
    dfs(child, 0);
    cout << (ans ? "Yes" : "No");
}