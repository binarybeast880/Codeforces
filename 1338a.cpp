#include <bits/stdc++.h>
using namespace std;
main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n], c = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] > a[i + 1])
                c++;
        }
        cout << c << endl;
    }
}