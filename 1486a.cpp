#include <bits/stdc++.h>
using namespace std;
main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        long long int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            if ((a[i + 1] == 0 && a[i] == 0) || (a[i] > a[i + 1]))
            {
                flag = 0;
                break;
            }
            flag = 1;
        }
        if (flag == 1)
            cout << "YES" << endl;
        else if (flag == 0)
            cout << "NO" << endl;
    }
    return 0;
}

/*
6
2
1 2
2
1 0
3
4 4 4
2
0 0
3
0 1 0
4
1000000000 1000000000 1000000000 1000000000
*/