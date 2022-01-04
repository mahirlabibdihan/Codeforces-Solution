#include <iostream>
using namespace std;

void solve()
{
}
int main()
{
    int n;
    cin >> n;
    long long xSum = 0, ySum = 0;
    for (int i = 0; i < 2 * n; i++)
    {
        int x, y;
        cin >> x >> y;
        xSum += x;
        ySum += y;
    }
    cout << xSum / n << " " << ySum / n << endl;
}