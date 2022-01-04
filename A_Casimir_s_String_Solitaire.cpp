#include <iostream>
using namespace std;
bool solve(string s)
{
    int A = 0, B = 0, C = 0;
    for (char c : s)
    {
        if (c == 'A')
            A++;
        else if (c == 'B')
            B++;
        else
            C++;
    }
    return A + C == B;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (solve(s))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}