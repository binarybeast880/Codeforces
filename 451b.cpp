#include <bits/stdc++.h>
using namespace std;
main()
{
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b, b + n);
    int cnt = 0, pos1, pos2;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            pos1 = i;
            break;
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] != b[i])
        {
            pos2 = i;
            break;
        }
    }
}