#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    long long n, p, q, r;
    cin >> n >> p >> q >> r;
    int a[100000];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    long long result = p * a[0] + q * a[0] + r * a[0];
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = j; k < n; k++)
            {
                if (p * a[i] + q * a[j] + r * a[k] > result)
                {
                    cout << i << " " << j << " " << k << endl;
                    result = p * a[i] + q * a[j] + r * a[k];
                }
            }
        }
    }
    cout << result << endl;
}