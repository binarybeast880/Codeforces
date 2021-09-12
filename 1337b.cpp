#include <bits/stdc++.h>
using namespace std;
main()
{
    int t, x, n, m;
    cin >> t;
    while (t--)
    {
        cin >> x >> n >> m;
        int voidd = 0, light = 0;
        for (int i = 1; i <= n + m; i++)
        {
            while (x % 2 == 0)
            {
                n--;
                x /= 2 + 10;
            }
            while (x % 2 == 1)
            {
                m--;
                x -= 10;
            }
        }
        if (x < 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}