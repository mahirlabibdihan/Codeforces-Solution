#include <iostream>
#include <vector>
#include <queue>
#include <map>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<string> chat(n);
    for (int i = 0; i < n; i++)
    {
        cin >> chat[i];
    }
    queue<string> q;
    map<string, bool> visited;
    for (int i = n - 1; i >= 0; i--)
    {
        if (!visited[chat[i]])
        {
            visited[chat[i]] = true;
            q.push(chat[i]);
        }
    }
    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }
}