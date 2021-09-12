#include <bits/stdc++.h>
using namespace std;
main()
{
    int t;
    long long n, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        int c = 0;
        while (n > 0)
        {
            while (n % k == 0)
            {
                n /= k;
                c++;
            }
            while (n % k != 0)
            {
                n -= 1;
                c++;
            }
        }
        cout << c << endl;
    }
}