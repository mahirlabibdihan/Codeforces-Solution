#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (n == 1)
    {
        cout << 1 << endl;
        return 0;
    }
    long long evenSum[int(float(n / 2.0))];
    long long oddSum[int(ceil(n / 2.0))];
    for (int i = 0; i < n; i++)
    {
        if (i % 2)
        {
            evenSum[i / 2] = a[i];
            if (i > 1)
            {
                evenSum[i / 2] += evenSum[i / 2 - 1];
            }
        }
        else
        {
            oddSum[i / 2] = a[i];
            if (i > 1)
            {
                oddSum[i / 2] += oddSum[i / 2 - 1];
            }
        }
    }
    int goodCandies = 0;
    for (int i = 0; i < n; i++)
    {
        int newOddSum = 0;
        int newEvenSum = 0;

        newEvenSum += oddSum[int(ceil(n / 2.0)) - 1];
        newEvenSum -= oddSum[i / 2];
        if (i > 1)
        {
            newEvenSum += evenSum[i / 2 - 1];
        }

        newOddSum += evenSum[int(float(n / 2.0)) - 1];
        if (i % 2)
        {
            newOddSum += oddSum[i / 2];
            newOddSum -= evenSum[i / 2];
        }
        else
        {
            if (i > 1)
            {
                newOddSum += oddSum[i / 2 - 1];
                newOddSum -= evenSum[i / 2 - 1];
            }
        }
        if (newOddSum == newEvenSum)
        {
            goodCandies++;
        }
    }
    cout << goodCandies;
}