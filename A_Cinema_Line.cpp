#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int c100 = 0, c50 = 0, c25 = 0;
    bool ans = true;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (ans)
        {
            if (a[i] == 25)
            {
                c25++;
            }
            else if (a[i] == 50)
            {
                c50++;
                if (c25 > 0)
                {
                    c25--;
                }
                else
                {
                    ans = false;
                }
            }
            else
            {
                c100++;
                if (c50 > 0)
                {
                    c50--;
                    if (c25 > 0)
                    {
                        c25--;
                    }
                    else
                    {
                        ans = false;
                    }
                }
                else if (c25 >= 3)
                {
                    c25 -= 3;
                }
                else
                {
                    ans = false;
                }
            }
        }
    }
    cout << (ans ? "YES" : "NO") << endl;
}