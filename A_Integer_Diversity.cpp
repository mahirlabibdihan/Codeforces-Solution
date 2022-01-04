#include <iostream>
#include <vector>
#include <map>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, int> count;
    int result = 0;
    for (int &i : a)
    {
        cin >> i;
        count[i]++;
        if (count[i] == 1)
        {
            result++;
        }
        if (count[i] == 2)
        {
            if (count[-i] == 0 && i != 0)
            {
                count[-i]++;
                result++;
            }
        }
    }
    cout << result << endl;
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