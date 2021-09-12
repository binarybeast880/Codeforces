#include <bits/stdc++.h>
using namespace std;
main()
{
    int t;
    long long int n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (n & (n - 1))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}