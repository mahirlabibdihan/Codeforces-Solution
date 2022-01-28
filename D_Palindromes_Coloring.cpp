#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
typedef long long ll;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> count(26, 0);
    for (int i = 0; i < n; i++)
    {
        char c;
        cin >> c;
        count[c - 'a']++;
    }
    sort(count.begin(), count.end());
    int l = 0;
    for (int i = 0; i < 26; i++)
    {
        if (count[i] > 0)
        {
            l = i;
            break;
        }
    }
    // for (int i = 0; i < 26; i++)
    // {
    //     cout << count[i] << " ";
    // }
    // cout << l << endl;
    int c;
    for (c = 0;;)
    {
        int i, j;
        for (i = 0, j = l; i < k && j < 26; j++)
        {
            if (c == 0)
            {
                if (count[j] == 0)
                {
                    l++;
                }
                else
                {
                    count[j]--;
                    i++;
                }
            }
            else
            {
                if (count[j] < 2)
                {
                    l++;
                }
                else
                {
                    count[j] -= 2;
                    i++;
                }
            }
            cout << count[j] << " " << i << endl;
            if (l >= 26)
                break;
            if (j == 25)
            {
                j = l - 1;
            }
        }
        if (i < k)
        {
            break;
        }
        if (!c)
            c++;

        else
            c += 2;
    }
    cout << c << endl;
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