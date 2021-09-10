#include <bits/stdc++.h>
using namespace std;
main()
{
    int n, v;
    cin >> n >> v;
    int a[n], b[n], max = 1, ans;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
        if (b[i] > max)
        {
            max = b[i];
            ans = a[i];
        }
    }
    cout << max << endl;
    cout << ans << endl;
}