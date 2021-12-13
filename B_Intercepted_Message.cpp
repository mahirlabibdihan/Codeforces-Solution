#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int x[100000], y[100000];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> y[i];
    }

    int count = 0;
    int xSum = 0, ySum = 0;
    for (int i = 0, j = 0; i < n || j < m;)
    {
        if (xSum <= ySum && i<n)
        {
            xSum += x[i++];
        }

        if (ySum < xSum && j<m)
        {
            ySum += y[j++];
        }

        if (xSum == ySum)
        {
            //cout << xSum << " " << ySum << endl;
            count++;
            xSum = ySum = 0;
        }
    }
    cout << count;
}