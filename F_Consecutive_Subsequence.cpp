#include <iostream>
#include <vector>
#include <map>
using namespace std;

vector<int> solve(vector<int> &a)
{
    vector<int> result;
    int n = a.size();
    map<int, int> count;
    int maxCount = 0;
    for (int i : a)
    {
        count[i] = max(count[i], count[i - 1] + 1);
        if (count[maxCount] < count[i])
        {
            maxCount = i;
        }
    }

    for (int i = maxCount - count[maxCount] + 1, j = 0; i <= maxCount; j++)
    {
        if (a[j] == i)
        {
            result.push_back(j + 1);
            i++;
        }
    }
    return result;
}
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &i : a)
    {
        cin >> i;
    }
    vector<int> result = solve(a);
    cout << result.size() << endl;
    for (int i : result)
    {
        cout << i << " ";
    }
    cout << endl;
}