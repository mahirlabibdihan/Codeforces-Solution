/*
    Wires can't be untangled if length of the sequence is odd.

    We will untangle part by part.
    If two adjacent symbols are same then we can untangle that part.
*/
#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.length();
    if (n % 2 == 1)
    {
        cout << "No" << endl;
    }
    else
    {
        stack<char> st;
        for (char c : s)
        {
            if (!st.empty())
            {
                if (st.top() == c)
                {
                    st.pop();
                }
                else
                {
                    st.push(c);
                }
            }
            else
            {
                st.push(c);
            }
        }
        if (st.empty())
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}