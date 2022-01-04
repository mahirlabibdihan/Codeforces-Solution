#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

void solve()
{
    string a, s;
    cin >> a >> s;
    reverse(a.begin(), a.end());
    reverse(s.begin(), s.end());
    string b;
    int n = a.length(), m = s.length();
    int i, j;
    for (i = 0, j = 0; j < m; i++, j++)
    {
        int aDigit = (i < n ? a[i] : '0') - '0';
        int sDigit = s[j] - '0';
        if (sDigit < aDigit)
        {
            j++;
            if (j == m)
            {
                cout << -1 << endl;
                return;
            }
            sDigit += 10 * (s[j] - '0');
            if (sDigit > aDigit + 9 || sDigit < aDigit)
            {
                cout << -1 << endl;
                return;
            }
        }

        int bDigit = sDigit - aDigit;
        b += char(bDigit + '0');
    }
    if (i < n)
    {
        cout << -1 << endl;
        return;
    }
    while (b.size() > 1 && b.back() == '0')
    {
        b.pop_back();
    }
    reverse(b.begin(), b.end());
    cout << b << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}