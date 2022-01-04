#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <climits>
using namespace std;
/*
    If 'l' next stone's position is smaller than current stone.
    If 'r' next stone's position is greater than current stone.
*/
vector<int> solve(string &s)
{
    int n = s.length();
    vector<int> result;
    int currIdx = 0;
    result.push_back(1);
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == 'l')
        {
            result.insert(result.begin() + currIdx, i + 2);
        }
        else
        {
            result.insert(result.begin() + (++currIdx), i + 2);
        }
    }
    return result;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    string s;
    cin >> s;
    vector<int> result = solve(s);
    for (int i : result)
    {
        cout << i << endl;
    }
}