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
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        if (n % 2 == 0)
        {
            for (int i = 0; i < n; i += 2)
            {
                swap(a[i], a[i + 1]);
            }
        }
        else if (n % 2 == 1)
        {
            for (int i = 0; i < n - 1; i++)
            {
                swap(a[i], a[i + 1]);
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
}