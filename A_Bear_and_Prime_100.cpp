#include <iostream>
#include <vector>
using namespace std;

int isPrime(int n)
{
    int i;
    if (n < 2)
        return 0;
    for (i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    vector<int> divisor;
    vector<int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
    for (int i : primes)
    {
        cout << i << endl;
        cout.flush();
        string response;
        cin >> response;
        if (response == "yes")
        {
            divisor.push_back(i);
        }
    }
    if (divisor.size() > 1)
    {
        cout << "composite" << endl;
    }
    else if (divisor.size() < 1)
    {
        cout << "prime" << endl;
    }
    else
    {
        for (int div = divisor[0] * divisor[0]; div <= 100; div *= divisor[0])
        {
            cout << div << endl;
            cout.flush();
            string response;
            cin >> response;
            if (response == "yes")
            {
                cout << "composite" << endl;
                return 0;
            }
        }
        cout << "prime" << endl;
    }
}