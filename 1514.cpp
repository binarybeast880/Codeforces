#include <bits/stdc++.h>
using namespace std;
main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n];
        double pro = 1,mul=1;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            pro *= a[i];
        }
        long long k=pro;
        if (pro-k>0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}