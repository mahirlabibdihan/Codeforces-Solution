#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
/*
Cases:
1. First K letters are not same
2. First K letter are same.
    1. Remaining Letters are same   
    2. Remaining Letters are not same
n=6 K=3
aaabcd
aaabbb or aaaaaa
aaaabc
*/
string solve(string s, int n, int k)
{
    sort(s.begin(), s.end());
    string result;
    result.push_back(s[k - 1]);
    if (s[0] != s[k - 1])
    {
    }
    else if (s[k] != s[n - 1])
    {
        for (int i = k; i < n; i++)
        {
            result.push_back(s[i]);
        }
    }
    else
    {
        for (int i = k; i < n; i += k)
        {
            result.push_back(s[i]);
        }
    }
    return result;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        string result = solve(s, n, k);
        cout << result << endl;
    }
}
/*
aabcc
abc
a
aabbccd
abc
abcd

aabb
a
abb
*/