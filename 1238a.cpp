#include <bits/stdc++.h>
using namespace std;
main()
{
    int t;
    int x, y;
    cin >> t;
    while (t--)
    {
        cin >> x >> y;
        int ans = abs(x - y);
        int f;
        for (int i = 2; i < ans; i++)
        {
            if (ans % i == 0)
            {
                f = i;
                break;
            }
        }
        int flag = 1;
        for (int j = 2; j < f; j++)
        {
            if (f % j == 0)
                flag = 0;
        }
        if (flag == 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}