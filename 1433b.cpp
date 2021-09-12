#include <bits/stdc++.h> //Accepted
using namespace std;
main()
{
    int t, n, pos1, pos2;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1)
            {
                pos1 = i;
                break;
            }
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] == 1)
            {
                pos2 = i;
                break;
            }
        }
        int c = 0;
        for (int i = pos1 + 1; i <= pos2 - 1; i++)
        {
            if (a[i] == 0)
                c++;
        }
        cout << c << endl;
    }
}