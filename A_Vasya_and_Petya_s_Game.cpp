#include <cstring>
#include <vector>
#include <iostream>
using namespace std;
vector<int> primes;
vector<int> squares;
void SieveOfEratosthenes(int n)
{
    vector<bool> dp(n + 1, true);
    for (int p = 2; p * p <= n; p++)
    {
        if (dp[p] == true)
        {
            for (int i = p * p; i <= n; i += p)
            {
                dp[i] = false;
            }
        }
    }
    for (int p = 2; p <= n; p++)
    {
        if (dp[p])
        {
            primes.push_back(p);
        }
    }
}
void countSquares(int n)
{
    for (int i = 0; i < primes.size() && primes[i] * primes[i] <= n; i++)
    {
        for (int j = primes[i] * primes[i]; j <= n; j *= primes[i])
        {
            squares.push_back(j);
        }
    }
}
int main()
{
    int n;
    cin >> n;
    SieveOfEratosthenes(n);
    countSquares(n);
    cout << primes.size() + squares.size() << endl;
    for (int i : primes)
    {
        cout << i << " ";
    }
    for (int i : squares)
    {
        cout << i << " ";
    }
}