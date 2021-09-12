#include <bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int n;
        cin >> n;
        int maxm = 0;
        while (n > 0)
        {
            int rem = n % 10;
            maxm = max(maxm, rem);
            n /= 10;
        }
        cout << maxm << endl;
    }
}