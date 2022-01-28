#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &i : a)
    {
        cin >> i;
    }
    sort(a.begin(), a.end());
    int q;
    cin >> q;
    while (q--)
    {
        int type, num;
        cin >> type >> num;
        if (type == 0)
        {
            cout << (n - (lower_bound(a.begin(), a.end(), num) - a.begin())) << endl;
        }
        else
        {
            cout << (n - (upper_bound(a.begin(), a.end(), num) - a.begin())) << endl;
        }
    }
}
/*
0: >=
1: >
*/