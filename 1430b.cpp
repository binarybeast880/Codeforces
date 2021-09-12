#include <bits/stdc++.h>
using namespace std;
main()
{
    long long int t, n, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        long long int a[n];
        for (long long int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long long int temp;
        sort(a,a+n);
        reverse(a,a+n);
        long long int sum = 0;
        for (long long int i = 0; i <= k; i++)
        {
            sum += a[i];
        }
        cout << sum << endl;
    }
}
