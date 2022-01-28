#include <iostream>
#include <vector>
#include <map>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin >> n;
    map<int, ll> c;
    ll result = 0;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        c[a - i] += a;
        result = max(c[a - i], result);
    }
    cout << result << endl;
}
