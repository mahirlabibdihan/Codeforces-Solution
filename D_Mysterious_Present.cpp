#include <iostream>
#include <vector>
using namespace std;
// Depth of M-ary tree
struct Envelope
{
    int w, h;
    bool operator<(Envelope &e)
    {
        return this->w < e.w && this->h < e.h;
    }
};
bool cmp(vector<int> a, vector<int> b)
{
    return a.size() < b.size();
}
vector<bool> visited(5001);
vector<Envelope> env(5001);
vector<int> height(5001), nextEnvelope(5001);
void dfs(int idx, int n)
{
    if (visited[idx])
    {
        return;
    }
    visited[idx] = true;
    for (int i = 1; i < n; i++)
    {
        if (env[idx] < env[i])
        {
            dfs(i, n);
            if (height[i] >= height[idx])
            {
                height[idx] = 1 + height[i];
                nextEnvelope[idx] = i;
            }
        }
    }
}
void createPath(vector<int> &path)
{
    for (int i = 0; nextEnvelope[i] > 0; i = nextEnvelope[i])
    {
        path.push_back(nextEnvelope[i]);
    }
}
vector<int> solve(vector<Envelope> env, int n, int w, int h)
{
    vector<int> result;
    dfs(0, n);
    createPath(result);
    return result;
}
int main()
{
    int n, w, h;
    cin >> n >> w >> h;
    env[0] = {w, h};
    for (int i = 1; i <= n; i++)
    {
        cin >> env[i].w >> env[i].h;
    }
    vector<int> result = solve(env, n + 1, w, h);
    cout << result.size() << endl;
    for (int i : result)
    {
        cout << i << " ";
    }
}