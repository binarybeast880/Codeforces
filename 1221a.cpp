#include <bits/stdc++.h>
using namespace std;
main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n], sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a + n, a);
        int c1 = 0, c5;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 2048)
            {
                cout << "YES" << endl;
                break;
            }
            else if (a[i] == 1024)
            {
                c1++;
                if (c1 == 2)
                    break;
            }
            else if (a[i] == 512)
            {
                c5++;
                if (c5 == 4)
                {
                    cout << "YES" << endl;
                    break;
                }
                else if (c5 == 2)
                {
                    for (int j = i; j < n; j++)
                    {
                        if (a[i] == 1024)
                            cout << "YES" << endl;
                        break;
                    }
                }
            }
        }
    }
}