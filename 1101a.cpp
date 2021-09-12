#include <bits/stdc++.h>
using namespace std;
main()
{
    int q, l, r, d, ans;
    cin >> q;
    while (q--)
    {
        cin >> l >> r >> d;
        if (d < l || d > r)
            cout << d << endl;
        else
            cout << (r / d) * d + d << endl;
    }
}
