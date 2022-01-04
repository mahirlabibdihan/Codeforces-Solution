#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int i;
    int c = 0;
    for (i = 0; i < n; i++)
    {
        cout << s[i];
        if (i < n - 1)
        {
            if (s[i] < s[i + 1])
            {
                break;
            }
            else if (s[i] == s[i + 1])
            {
                if (c == 0)
                {
                    break;
                }
            }
            else
            {
                c++;
            }
        }

        if (i == n - 1)
        {
            break;
        }
    }
    for (; i >= 0; i--)
    {
        cout << s[i];
    }
    cout << endl;
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