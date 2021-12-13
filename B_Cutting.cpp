#include <iostream>
#include <set>
#include <cmath>
using namespace std;

int main()
{
    int n, B;
    cin >> n >> B;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int even = 0, odd = 0;
    multiset<int> cost;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        if (even == odd && i < n - 1)
        {
            cost.insert(abs(a[i] - a[i + 1]));
        }
    }
    int sum = 0, c = 0;
    for (auto i : cost)
    {
        if (sum + i <= B)
        {
            sum += i;
            c++;
        }
        else
        {
            break;
        }
    }
    cout << c << endl;
}