#include <bits/stdc++.h>
using namespace std;
main()
{
    int t, x, y, a, b;
    cin >> t;
    while (t--)
    {
        int step = 0;
        cin >> x >> y >> a >> b;
        if ((y - x) % (a + b) == 0)
            cout << (y - x) / (a + b) << endl;
        else
            cout << "-1" << endl;
    }
}