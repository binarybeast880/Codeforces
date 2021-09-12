#include <bits/stdc++.h>
using namespace std;
main()
{
    int n;
    cin >> n;
    int sum = 0;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    for (int i = 1; i < n; i++)
    {
        if (a[i - 1] > a[i])
        {
            sum += (a[i - 1] - a[i]);
        }
    }
    cout << sum;
}