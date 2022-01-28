#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

bool isSet(int n, int i)
{
    return (n & (1 << i)) != 0;
}
int set(int n, int i)
{
    return n | (1 << i);
}
void solve()
{
    int n, l;
    cin >> n >> l;
    vector<int> x(n);
    for (int &i : x)
    {
        cin >> i;
    }
    int result = 0;
    for (int j = 0; j < l; j++)
    {
        int c = 0; // Total 1
        for (int i = 0; i < n; i++)
        {
            if (isSet(x[i], j)) // if j-th bit of i-th number is set
            {
                c++; // Increase count of 1
            }
        }
        if (2 * c > n) // If count of 1 is greater than 0
        {
            result = set(result, j); // Set jth bit
        }
    }
    cout << result << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
