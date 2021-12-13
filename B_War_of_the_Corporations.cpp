#include <iostream>
using namespace std;
int countFreq(string &txt, string &pat)
{
    int M = pat.length();
    int N = txt.length();
    int res = 0;

    /* A loop to slide pat[] one by one */
    for (int i = 0; i <= N - M; i++)
    {
        int j;
        for (j = 0; j < M; j++)
        {
            if (txt[i + j] != pat[j])
            {
                break;
            }
        }
        if (j == M)
        {
            res++;
            i = i + M - 1;
        }
    }
    return res;
}
int main()
{
    string s, t;
    cin >> s >> t;
    cout << countFreq(s, t);
}