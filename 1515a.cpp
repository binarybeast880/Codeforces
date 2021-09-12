//Phoenix and GOLD
#include <bits/stdc++.h>
using namespace std;
main()
{
    int t, n, x;
    cin >> t;
    while (t--)
    {
        cin >> n >> x;
        int a[n], sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        int temp;
        for (int i = 0; i < n; i += 2)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[i] < a[j])
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
        if (sum == x)
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
            for (int i = 0; i < n; i++)
            {
                cout << a[i] << " ";
            }
            cout << endl;
        }
    }
}