#include <bits/stdc++.h>
using namespace std;
main()
{
    int t, n, m;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        int a[n][m], one = 0, zero = 0;
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                cin >> a[i][j];
                if (a[i][j] == 0)
                    zero++;
                else
                    one++;
            }
        }
        if (zero < one)
            cout << "Ashish" << endl;
        else
            cout << "Vivek" << endl;
    }
}