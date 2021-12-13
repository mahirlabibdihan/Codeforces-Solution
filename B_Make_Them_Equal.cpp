#include <iostream>
#include <set>
using namespace std;

int main()
{
    int n;
    cin >> n;
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        s.insert(a);
    }
    if (s.size() == 1)
    {
        cout << 0;
    }
    else if (s.size() == 2)
    {
        int a, b;
        auto i = s.begin();
        a = *i;
        i++;
        b = *i;
        if ((b - a) % 2)
        {
            cout << b - a;
        }
        else
        {
            cout << (b - a) / 2;
        }
    }
    else if (s.size() == 3)
    {
        int a, b, c;
        auto i = s.begin();
        a = *i;
        i++;
        b = *i;
        i++;
        c = *i;
        if ((c - a) % 2)
        {
            cout << -1;
        }
        else if (a + (c - a) / 2 == b)
        {
            cout << (c - a) / 2;
        }
        else
        {
            cout << -1;
        }
    }
    else
    {
        cout << -1;
    }
}