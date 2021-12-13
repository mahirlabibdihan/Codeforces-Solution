#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int i = 0, j = 1;
    int ans = 1;
    /*while (j < n)
    {
        if (a[j] <= 2 * a[i])
        {
            ans = max(ans, j - i + 1);
            j++;
        }
        else
        {
            i++;
        }
    }*/
    while (j < n)
    {
        if (a[j] <= 2 * a[j - 1])
        {
            ans = max(ans, j - i + 1);
            j++;
        }
        else
        {
            //  cout << j << " " << i << endl;
            i = j++;
        }
    }
    cout << ans;
}