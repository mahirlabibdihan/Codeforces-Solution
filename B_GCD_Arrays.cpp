#include <iostream>
#include <cmath>
using namespace std;
/*
Total r-l+1 numbers
Gcd of all the even numbers>=2. So no need to think about the even numbers.
if(k>(r-l)/2) YES. Multiply all the odds with even 
*/
/*
odd*odd = odd
even*even = even
odd*even = even
odd->prime or odd*odd
*/
bool solve(int l, int r, int k)
{
    if ((r - l + 1) % 2 == 0)
    {
        return k >= ((r - l + 1) / 2);
    }
    else
    {
        if (l % 2 == 0)
        {
            return k >= floor((r - l + 1) / 2.0);
        }
        else
        {
            if (l == r && l > 1)
            {
                return true;
            }
            return k >= ceil((r - l + 1) / 2.0);
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, r, k;
        cin >> l >> r >> k;
        if (solve(l, r, k))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}