#include <bits/stdc++.h>
using namespace std;
int solve(vector<string> &words)
{
    int n = words.size();
    vector<map<char, int>> wordCharCount(n);

    // Character counts of each word
    for (int i = 0; i < n; i++)
    {
        for (char c : words[i])
        {
            wordCharCount[i][c]++;
        }
    }
    int result = 0;
    map<char, vector<pair<int, int>>> sorted;
    for (char c = 'a'; c <= 'e'; c++)
    {
        for (int j = 0; j < n; j++)
        {
            sorted[c].push_back(make_pair(int(words[j].length()) - 2 * wordCharCount[j][c], j));
        }
        sort(sorted[c].begin(), sorted[c].end());
        int maxCharCount = 0, totalCharCount = 0, wordCount = 0;
        for (int j = 0; j < n; j++)
        {
            maxCharCount += wordCharCount[sorted[c][j].second][c];
            totalCharCount += words[sorted[c][j].second].length();
            if (2 * maxCharCount <= totalCharCount)
            {
                break;
            }
            wordCount++;
        }
        result = max(result, wordCount);
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
        vector<string> words(n);
        for (string &s : words)
        {
            cin >> s;
        }
        cout << solve(words) << endl;
    }
}