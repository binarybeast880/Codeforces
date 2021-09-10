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
    sort(a, a + n);
    if (n % 2 == 0)
        cout << a[n / 2 - 1];
    else if (n % 2 == 1)
        cout << a[n / 2];
}