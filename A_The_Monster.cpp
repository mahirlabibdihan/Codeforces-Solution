#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int c, d;
    cin >> c >> d;

    long long r = b, m = d;

    for (int i = 0; i < 100000; i++)
    {
        if (m > r)
        {
            r += a;
        }
        else if (r > m)
        {
            m += c;
        }
        else
        {
            cout << r << endl;
            return 0;
        }
    }
    cout << -1 << endl;
}
