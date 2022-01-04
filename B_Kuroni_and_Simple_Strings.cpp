#include <iostream>
#include <vector>
#include <stack>
#include <queue>
using namespace std;

vector<int> solve(string s)
{
    int n = s.length();
    queue<int> open;
    stack<int> close;
    int l = 0, r = n - 1;
    while (true)
    {
        int openTmp = 0, closeTmp = 0;
        for (; l < r; l++)
        {
            if (s[l] == '(')
            {
                openTmp = l + 1;
                l++;
                break;
            }
        }
        for (; l <= r; r--)
        {
            if (s[r] == ')')
            {
                closeTmp = r + 1;
                r--;
                break;
            }
        }
        if (openTmp && closeTmp)
        {
            open.push(openTmp);
            close.push(closeTmp);
        }
        else
        {
            break;
        }
    }
    vector<int> result;
    while (!open.empty())
    {
        result.push_back(open.front());
        open.pop();
    }
    while (!close.empty())
    {
        result.push_back(close.top());
        close.pop();
    }
    return result;
}
int main()
{
    string s;
    cin >> s;
    vector<int> result = solve(s);
    if (result.empty())
    {
        cout << 0 << endl;
    }
    else
    {
        cout << 1 << endl;
        cout << result.size() << endl;
        for (int i : result)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}