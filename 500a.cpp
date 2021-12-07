#include <bits/stdc++.h>
using namespace std;
int a[1234567];
main()
{
    int n, t;
    cin >> n >> t;
    for (int i = 1; i <= n - 1; i++)
        cin >> a[i];
    int x = 1;
    while (x < t)
    {
        x += a[x];
    }
    if (x == t)
        cout << "YES";
    else
        cout << "NO";
}