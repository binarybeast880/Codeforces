#include <bits/stdc++.h>
using namespace std;
main()
{
    int t, n, m;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        cout << min(2, n - 1) * m << endl;
    }
}