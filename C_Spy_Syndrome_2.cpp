#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

int n, m;
string cypher;
vector<bool> visited(100000);
vector<string> words(100000);
string result(100000, '\0');
map<string, int> wordMap;
bool found = false;
string reverse(string s)
{
    int n = s.length(), i;
    for (i = 0; i < n / 2; i++)
    {
        if (s[i] < 'a')
        {
            s[i] += 'a' - 'A';
        }
        if (s[n - i - 1] < 'a')
        {
            s[n - i - 1] += 'a' - 'A';
        }
        char c = s[i];
        s[i] = s[n - i - 1];
        s[n - i - 1] = c;
    }
    if (s[i] < 'a')
    {
        s[i] += 'a' - 'A';
    }
    return s;
}
void dfs(int i, string word, string text)
{
    if (found)
    {
        return;
    }
    if (i == n)
    {
        if (word.empty())
        {
            result = text;
            found = true;
        }
        return;
    }
    word += cypher[i];
    if (wordMap.find(word) != wordMap.end())
    {
        if (!visited[i])
        {
            visited[i] = true;
            dfs(i + 1, string(), text + " " + words[wordMap[word]]);
        }
    }
    dfs(i + 1, word, text);
}
void solve()
{
    for (int i = 0; i < m; i++)
    {
        wordMap[reverse(words[i])] = i;
    }
    dfs(0, string(), string());
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cin >> n;
    cin >> cypher;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> words[i];
    }
    solve();
    cout << result << endl;
}