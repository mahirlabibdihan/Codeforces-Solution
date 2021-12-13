#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a;

    int dir = 0, lastDay = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (lastDay > -1)
        {
            if (a > lastDay)
            {
                dir = 1;
            }
            else
            {
                dir = -1;
            }
        }
        lastDay = a;
    }
    if (dir == 1)
    {
        if (lastDay == 15)
        {
            cout << "DOWN";
        }
        else
        {
            cout << "UP";
        }
    }
    else if (dir == -1)
    {
        if (lastDay == 0)
        {
            cout << "UP";
        }
        else
        {
            cout << "DOWN";
        }
    }
    else
    {
        if (lastDay == 15)
        {
            cout << "DOWN";
        }
        else if (lastDay == 0)
        {
            cout << "UP";
        }
        else
        {
            cout << "-1";
        }
    }
}