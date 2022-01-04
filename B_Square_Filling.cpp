#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n][m], b[n][m] = {};
    int one = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            one += a[i][j];
        }
    }
    int c = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < m - 1; j++)
        {
            if (a[i][j])
            {
                if (a[i + 1][j] && a[i][j + 1] && a[i + 1][j + 1])
                {
                    c++;
                    if (!b[i][j])
                    {
                        b[i][j] = 1;
                        one--;
                    }
                    if (!b[i + 1][j])
                    {
                        b[i + 1][j] = 1;
                        one--;
                    }
                    if (!b[i][j + 1])
                    {
                        b[i][j + 1] = 1;
                        one--;
                    }
                    if (!b[i + 1][j + 1])
                    {
                        b[i + 1][j + 1] = 1;
                        one--;
                    }
                }
            }
        }
    }
    if (one)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << c << endl;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < m - 1; j++)
            {
                if (a[i][j])
                {
                    if (a[i][j + 1] && a[i + 1][j] && a[i + 1][j + 1])
                    {
                        cout << i + 1 << " " << j + 1 << endl;
                    }
                }
            }
        }
    }
}