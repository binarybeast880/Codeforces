#include <bits/stdc++.h>
using namespace std;
main()
{
    long long int l, r, i, x, y, c = 0, k = 0;
    cin >> l >> r;
    for (i = l; i <= r; i++)
    {
        if (i % 2 == 0 || i % 3 == 0)
            c++;
        if (i % 2 == 0 && i % 3 == 0)
            k++;
    }
    cout << c - k;
}