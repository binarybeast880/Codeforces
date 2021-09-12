#include <bits/stdc++.h>
using namespace std;
main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    // sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((a[i] + a[j]) % 2 == 1)
            {
                swap(a[i], a[j]);
            }
        }
    }
    for (int i = n - 1; i >= 0; i--)
        cout << a[i] << " ";
}