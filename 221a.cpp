#include <bits/stdc++.h>
using namespace std;
main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 1; i <= n; i++)
    {
        a[i] = i;
    }
    for (int i = 2; i <= n; i += 2)
    {
        swap(a[i - 1], a[i]);
    }
    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}