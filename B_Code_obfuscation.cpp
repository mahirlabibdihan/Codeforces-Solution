#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<char, bool> c;
    char curr = 'a';
    string s;
    cin >> s;
    for (char i : s)
    {
        if (i == curr)
        {
            c[i] = true;
            curr++;
        }
        else if (!c[i])
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}