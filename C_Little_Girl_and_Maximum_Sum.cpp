#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

//Compiler version g++ 6.3.0
// C++ program to show segment tree operations like construction, query
// and update
#include <bits/stdc++.h>
using namespace std;

int tree[200000 + 200000 - 1];
// A utility function to get the middle index from corner indexes.
int getMid(int s, int e)
{
    return s + (e - s) / 2;
}

int get(int sL, int sR, int qL, int qR, int pos)
{
    // If segment of this node is a part of given range, then return
    // the sum of the segment
    if (qL <= sR && qR >= sR)
        return tree[pos];

    // If segment of this node is outside the given range
    if (sR < qL || sL > qR)
        return 0;

    // If a part of this segment overlaps with the given range
    int mid = getMid(sL, sR);
    return get(sL, mid, qL, qR, 2 * pos + 1) +
           get(mid + 1, sR, qL, qR, 2 * pos + 2);
}

void updateRange(int sL, int sR, int i, int diff, int pos)
{
    // Base Case: If the input index lies outside the range of
    // this segment
    if (i < sL || i > sR)
        return;
    tree[pos] = tree[pos] + diff;
    if (sR > sL)
    {
        int mid = getMid(sL, sR);
        updateRange(l, mid, i, diff, 2 * pos + 1);
        updateRange(mid + 1, r, i, diff, 2 * pos + 2);
    }
}
int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> a(n), count(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    while (q--)
    {
        int l, r;
        cin >> l >> r;
    }
    for (int i = 0; i < n; i++)
    {
        count[i];
    }
    sort(a.begin(), a.end());
    sort(count.begin(), count.end());

    long long result = 0;
    for (int i = 0; i < n; i++)
    {
        result += (long long)a[i] * count[i];
    }
    printf("%lld", result);
}