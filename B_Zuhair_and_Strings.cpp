#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    map<char, int> count;

    char curr = 0;
    int freq = 0;
    int level = 0;
    for (char c : s)
    {
        if (c == curr)
        {
            freq++;
        }
        else
        {
            count[curr] += freq / k;
            level = max(level, count[curr]);
            curr = c;
            freq = 1;
        }
    }
    count[curr] += freq / k;
    level = max(level, count[curr]);
    cout << level;
}