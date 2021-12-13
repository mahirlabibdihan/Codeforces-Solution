#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.length();
    int c;
    for (c = 0; n > 1; c++)
    {
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += s[i] - '0';
        }
        s = to_string(sum);
        n = s.length();
    }
    cout << c;
}