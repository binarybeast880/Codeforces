#include <bits/stdc++.h> //accepted
using namespace std;
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        // if (n % 3 == 0)
        // cout << n / 3 << " " << n / 3 << endl;
        // else if (n / 3 + 1 < n / 3)
        // cout << n / 3 + 1 << " " << n / 3 << endl;
        // else
        int c1 = n / 3;
        int c2 = n - (2 * n) / 3;
        if (c1 + 2 * c2 == n)
            cout << c1 << " " << c2 << endl;
        else
            cout << c2 << " " << c1 << endl;
    }
}