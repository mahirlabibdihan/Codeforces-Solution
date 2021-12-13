#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    char letter[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> letter[i][j];
        }
    }
    int rL = 0, rU = n, cL = 0, cU = m;
    for (int i = 0; i < n; i++)
    {
        int j;
        for (j = 0; j < m; j++)
        {
            if (letter[i][j] == '*')
            {
                break;
            }
        }
        if (j == m)
        {
            rL++;
        }
        else
        {
            break;
        }
    }
    for (int i = n - 1; i > -1; i--)
    {
        int j;
        for (j = 0; j < m; j++)
        {
            if (letter[i][j] == '*')
            {
                break;
            }
        }
        if (j == m)
        {
            rU--;
        }
        else
        {
            break;
        }
    }
    for (int j = 0; j < m; j++)
    {
        int i;
        for (i = 0; i < n; i++)
        {
            if (letter[i][j] == '*')
            {
                break;
            }
        }
        if (i == n)
        {
            cL++;
        }
        else
        {
            break;
        }
    }
    for (int j = m - 1; j > -1; j--)
    {
        int i;
        for (i = 0; i < n; i++)
        {
            if (letter[i][j] == '*')
            {
                break;
            }
        }
        if (i == n)
        {
            cU--;
        }
        else
        {
            break;
        }
    }
    for (int i = rL; i < rU; i++)
    {
        for (int j = cL; j < cU; j++)
        {
            cout << letter[i][j];
        }
        cout << endl;
    }
}