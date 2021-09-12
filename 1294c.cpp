#include <bits/stdc++.h>
using namespace std;
main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (n == 2)
            cout << "NO" << endl;
        if (n % 16 == 0)
        {
            if (n > 32)
            {
                cout << "YES" << endl;
                cout << 2 << " " << 4 << " " << n / 8 << endl;
            }
            else
                cout << "NO" << endl;
        }
        if (n % 2 == 1)
        {
            if (n % 15 == 0)
            {
                cout << "YES" << endl;
                cout << 3 << " " << 5 << " " << n / 15 << endl;
            }
            else
                cout << "NO" << endl;
        }
    }
}