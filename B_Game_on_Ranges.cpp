#include <iostream>
#include <vector>
#include <map>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> arr(n);
    map<pair<int, int>, bool> range;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        range[{a, b}] = true;
        arr[i].first = a;
        arr[i].second = b;
        // cout << "done" << endl;
    }
    for (int i = 0; i < n; i++)
    {
        int l = arr[i].first;
        int r = arr[i].second;
        for (int i = l; i <= r; i++)
        {
            // cout << i << endl;
            if (i > l && i < r)
            {
                if (range[{l, i - 1}] && range[{i + 1, r}])
                {
                    printf("%d %d %d\n", l, r, i);
                    break;
                }
            }
            else if (i < r)
            {
                // cout << i + 1 << " " << r << endl;
                if (range[{i + 1, r}])
                {
                    printf("%d %d %d\n", l, r, i);
                    break;
                }
            }
            else if (i > l)
            {
                if (range[{l, i - 1}])
                {
                    printf("%d %d %d\n", l, r, i);
                    break;
                }
            }
            else
            {
                printf("%d %d %d\n", l, r, i);
                break;
            }
        }
    }
    printf("\n");
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