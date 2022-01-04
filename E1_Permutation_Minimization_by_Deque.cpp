#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
using namespace std;

deque<int> solve(vector<int> &a)
{
    deque<int> result;
    for (int i : a)
    {
        if (result.empty())
        {
            result.push_back(i);
        }
        else
        {
            if (i < result.front())
            {
                result.push_front(i);
            }
            else
            {
                result.push_back(i);
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
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &i : a)
        {
            cin >> i;
        }
        deque<int> result = solve(a);
        for (int i : result)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}