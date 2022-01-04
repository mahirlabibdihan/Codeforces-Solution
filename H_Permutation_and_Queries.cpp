#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> p(n);
    for (int &i : p)
    {
        cin >> i;
    }
    while (q--)
    {
        int t;
        cin >> t;
        if (t == 1)
        {
            int x, y;
            cin >> x >> y;
        }
        else
        {
            int i, k;
            cin >> i >> k;
        }
    }
}