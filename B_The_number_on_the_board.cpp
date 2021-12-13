#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int k;
    cin >> k;
    string n;
    cin >> n;
    sort(n.begin(), n.end());
    int sum = 0;
    for (auto i : n)
    {
        sum += i - '0';
    }
    int diff = (k > sum ? k - sum : 0);
    int c = 0;
    for (auto i : n)
    {
        if (i - '0' + diff > 9)
        {
            c++;
            diff -= 9 - (i - '0');
        }
        else if (diff > 0)
        {
            c++;
            diff = 0;
            break;
        }
    }
    cout << c << endl;
}