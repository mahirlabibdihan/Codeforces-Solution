#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int moves = 0;
    while (n--)
    {
        int a;
        cin >> a;
        moves += a - 1;
        if (moves % 2 == 0)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }
}