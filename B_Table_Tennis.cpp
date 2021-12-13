#include <iostream>
using namespace std;
int main()
{
    long long n, k;
    cin >> n >> k;
    int a[n];
    int m = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > a[m])
        {
            m = i;
        }
    }

    int c = 0;
    int i = 1;
    int p = a[0], q;
    while (i < m)
    {
        q = a[i++];
        if (p > q)
        {
            c++;
        }
        else
        {
            if (c >= k)
            {
                cout << p << endl;
                return 0;
            }
            c = 1;
            p = q;
        }
    }
    if (c >= k)
    {
        cout << p << endl;
        return 0;
    }
    cout << a[m];
}