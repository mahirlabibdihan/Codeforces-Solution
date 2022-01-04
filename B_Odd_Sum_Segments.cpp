#include <iostream>
#include <vector>
using namespace std;
/*
For the first (k-1) sub segments we will take one odd number in each segment.
After getting (k-1) odd segments we will take the remaining numbers as the k-th sub segment.
If the k-th segment is odd then answer is 'YES'. Otherwise 'NO'.
*/
vector<int> solve(vector<int> &a, int k)
{
    int n = a.size();
    vector<int> result;
    long long subSegmentSum = 0;
    for (int i = 0; i < n; i++)
    {
        subSegmentSum += a[i];
        if (subSegmentSum % 2 == 1)
        {
            if (result.size() + 1 < k)
            {
                result.push_back(i + 1);
                subSegmentSum = 0;
            }
            else if (i == n - 1)
            {
                result.push_back(i + 1);
                subSegmentSum = 0;
            }
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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<int> result = solve(a, k);

        if (result.size() < k)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            for (int i = 0; i < result.size(); i++)
            {
                cout << result[i] << " ";
            }
            cout << endl;
        }
    }
}