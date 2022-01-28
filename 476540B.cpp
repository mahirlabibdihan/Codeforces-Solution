#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
typedef long long ll;

int power(int x, int n)
{
    if (n == 0)
        return 1;
    return x * power(x, n - 1);
}
void solve()
{
    int A, B;
    cin >> A >> B;
    cout << power(32, A - B) << endl;
}
int main()
{
    // int t;
    // cin >> t;
    // while (t--)
    {
        solve();
    }
}
