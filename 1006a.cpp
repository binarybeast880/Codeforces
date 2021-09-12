/*

5
1 2 4 5 10

1 1 3 5 9


*/
#include <bits/stdc++.h>
using namespace std;
main()
{
    int n;
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
            a[i] = 2;
        }
        else if (a[i] == 2)
        {
            a[i] == 1;
        }
        else if (a[i] == 3)
        {
            a[i] = 4;
        }
        else if (a[i] == 4)
        {
            a[i] = 3;
        }
        else if (a[i] == 5)
        {
            a[i] = 6;
        }
        else if (a[i] == 6)
        {
            a[i] = 5;
        }
        else if (a[i] == 10)
        {
            a[i] = 9;
        }
        else if (a[i] == 100)
        {
            a[i] = 99;
        }
        else if (a[i] == 1000)
        {
            a[i] = 999;
        }
        else if (a[i] == 10000)
        {
            a[i] = 9999;
        }
        else if (a[i] == 100000)
        {
            a[i] = 99999;
        }
        else if (a[i] == 1000000)
        {
            a[i] = 999999;
        }
        else if (a[i] == 10000000)
        {
            a[i] = 9999999;
        }
        else if (a[i] == 100000000)
        {
            a[i] = 99999999;
        }
        else if (a[i] == 1000000000)
        {
            a[i] = 999999999;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
