#include <bits/stdc++.h>
using namespace std;
main()
{
    int n, maxofall, minoftwo;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    maxofall = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > maxofall)
            maxofall = a[i];
    }
    minoftwo = min(maxofall, n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += abs(minoftwo - a[i]);
    }
    cout << sum;
}