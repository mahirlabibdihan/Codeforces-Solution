#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void forward(vector<ll> &mank, vector<ll> k, ll j, ll n);
void backward(vector<ll> &mank, vector<ll> k, ll j, ll n);
void solve()
{
    int64_t d;
    ll n;
    cin >> n;
    vector<ll> k(n), h(n), mank(k);
    for (int i = 0; i < n; i++)
    {
        cin >> k[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
        mank[i] = h[i];
    }
    forward(mank, k, 0LL, n);
    ll result = 0;
    result += ((mank[0] * (mank[0] + 1)) / 2);
    // cout << mank[0] << " ";
    for (int i = 1; i < n; i++)
    {
        // cout << mank[i] << " ";
        result += ((mank[i] * (mank[i] + 1)) / 2);
        if (mank[i - 1] == mank[i] - (k[i] - k[i - 1]))
        {
            result -= ((mank[i - 1] * (mank[i - 1] + 1)) / 2);
        }
    }
    cout << result << endl;
}
int main()
{
    cout << 1905072 % 4 << endl;
}
void backward(vector<ll> &mank, vector<ll> k, ll j, ll n)
{
    for (int i = n - 2; i >= j; i--)
    {
        if ((k[i + 1] - k[i]) >= mank[i + 1])
        {
        }
        else if (mank[i] == mank[i + 1] - (k[i + 1] - k[i]))
        {
        }
        else if (mank[i] > mank[i + 1] - (k[i + 1] - k[i]))
        {
            forward(mank, k, i, n);
        }
        else if (mank[i] < mank[i + 1] - (k[i + 1] - k[i]))
        {
            mank[i] = mank[i + 1] - (k[i + 1] - k[i]); // Increasing mank[i]
        }
    }
}
void forward(vector<ll> &mank, vector<ll> k, ll j, ll n)
{
    for (int i = j; i < n - 1; i++)
    {
        if ((k[i + 1] - k[i]) >= mank[i + 1])
        {
        }
        else if (mank[i] == mank[i + 1] - (k[i + 1] - k[i]))
        {
        }
        else if (mank[i] > mank[i + 1] - (k[i + 1] - k[i]))
        {
            mank[i + 1] = mank[i] + (k[i + 1] - k[i]); // Increasing mank[i+1]
        }
        else if (mank[i] < mank[i + 1] - (k[i + 1] - k[i]))
        {
            backward(mank, k, j, i + 2);
        }
    }
}