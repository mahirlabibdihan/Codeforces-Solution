#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    bool odd = false, even = false;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] % 2)
        {
            odd = true;
        }
        else
        {
            even = true;
        }
    }
    if (odd && even)
    {
        sort(a, a + n);
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << ' ';
    }
}