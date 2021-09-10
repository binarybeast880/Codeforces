#include <bits/stdc++.h>
using namespace std;
main()
{
    int k, l, ans;
    cin >> k >> l;
    if (l % k == 0)
    {
        for (int i = 1; i <= k; i++)
        {
            if (pow(k, i) == l)
            {
                cout << "YES" << endl;
                cout << i - 1 << endl;
                return 0;
            }
        }
    }
    else
        cout << "NO" << endl;
}