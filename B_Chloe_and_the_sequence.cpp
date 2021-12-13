#include <iostream>
using namespace std;
int main()
{
    long long n, k;
    cin >> n >> k;
    long long l = 1, r = (1LL << n) - 1;
    while (l < r)
    {
        long long m = (l + r) / 2;
        //cout << m << " " << k << endl;
        if (m < k)
            l = m + 1;
        else if (m > k)
            r = m;
        else
            break;
        n--;
    }
    cout << n;
}