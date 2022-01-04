#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

void dfs(int idx, vector<int> next, vector<int> &p, vector<bool> &visited)
{
    visited[idx] = true;
    p[idx] = next[idx];
    if (!visited[next[idx]])
    {
        dfs(next[idx], next, p, visited);
    }
}
void solve()
{
    int n;
    scanf("%d", &n);
    vector<int> next(n + 1, -1);
    // O(n)
    for (int i = 0, q = 1, lastResponse = -1; i < 2 * n && q <= n; i++)
    {
        printf("? %d\n", q);
        fflush(stdout);
        cout.flush();
        int response;
        scanf("%d", &response);
        if (lastResponse != -1)
        {
            next[lastResponse] = response;
        }
        if (next[response] != -1)
        {
            q++;
            lastResponse = -1;
        }
        else
        {
            lastResponse = response;
        }
    }

    vector<int> p(n + 1);
    vector<bool> visited(n + 1, false);
    // O(n)
    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            dfs(i, next, p, visited);
        }
    }

    printf("! ");
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", p[i]);
        fflush(stdout);
        cout.flush();
    }
    printf("\n");
    fflush(stdout);
    cout.flush();
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    int t;
    scanf("%d", &t);
    while (t--)
    {
        solve();
    }
}