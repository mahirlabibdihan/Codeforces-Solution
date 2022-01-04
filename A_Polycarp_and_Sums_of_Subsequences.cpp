#include <iostream>
using namespace std;
typedef long long ll;

void solve()
{
    int b[7];
    for (int i = 0; i < 7; i++)
    {
        cin >> b[i];
    }
    if (b[0] + b[1] == b[2])
    {
        cout << b[0] << " " << b[1] << " " << b[3] << endl;
    }
    else
    {
        cout << b[0] << " " << b[1] << " " << b[2] << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}