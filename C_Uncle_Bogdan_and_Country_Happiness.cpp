#include <iostream>
#include <vector>
using namespace std;

// There is only one unique path from capital to any city
// Leaf => -p[i]<= h[i] <=p[i]
// Root => -m<= h[1] <=m
// Total h of childs are <= h of parent

// Citizens of child nodes,will go through parent nodes
// We will add citizens of child node to parent nodes
// We will start this adding process from leaf to root
// Thus p[1] will be equal to m
// Then for every node -p[i]<= h[i] <=p[i]      // 2nd Condition
// And p[i]-h[i] must be divisible by 2.    // 1st Condition
// As for every bad mood 2 will be substracted

// Parent
// g+b=sumP
// g-b=h
// g=(sumP+h)/2
// b=(sumP-h)/2

// Child
// g+b=sum of sumP of all childs=Parent(sumP-p)
// g-b=sumH
// g=(sum.sumP+sumH)/2
// b=(sum.sumP-sumH)/2
// Parent sumP - child sumP = Parent P

// Parent g >= child g
// Parent(sumP+h)>=Child(sum.sumP+sumH)
// Parent(sumP+h)>=Child(sumH)+Parent(sumP-p)
// Parent(p+h)>=Child(sumH)     // Third Condition: Happiness can't be improved 
vector<int> sumP(100001);
vector<vector<int>> adj(100001);
vector<int> h(100001);
vector<int> p(100001);
vector<int> sumH(100001);
void dfs(int prev, int curr)
{
    for (int i : adj[curr])
    {
        if (i != prev)
        {
            dfs(curr, i);
        }
    }
    if (prev != -1)
    {
        sumP[prev] += sumP[curr];
        sumH[prev] += h[curr];
    }
}

void solve()
{

    int n, m;
    cin >> n >> m;
    // 2*n
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    // n
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }
    for (int i = 0; i < n; i++)
    {
        sumP[i] = p[i];
        sumH[i] = 0;
        adj[i].clear();
    }
    // 3*(n-1)
    for (int i = 0; i < n - 1; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[a - 1].push_back(b - 1);
        adj[b - 1].push_back(a - 1);
    }

    // 12*n
    dfs(-1, 0);

    int i;
    for (i = 0; i < n; i++)
    {
        if ((sumP[i] + h[i]) % 2 != 0)
        {
            break;
        }
        else if (abs(h[i]) > sumP[i])
        {
            break;
        }
        else if (sumH[i] > h[i] + p[i])
        {
            break;
        }
    }
    if (i < n)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
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