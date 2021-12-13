#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];
    int sum = 0;
    int n100 = 0, n200 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i] / 100;
        if (a[i] == 100)
        {
            n100++;
        }
        else
        {
            n200++;
        }
    }
    if (sum % 2 == 0)
    {
        if ((sum / 2) % 2 == 0)
        {
            cout << "YES";
        }
        else if (n100 > 1)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
    else
    {
        cout << "NO";
    }
}