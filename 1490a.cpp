#include <bits/stdc++.h>
using namespace std;

void testcase()
{
    int n;
    cin >> n;
    int nw;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ans = 0;
    for (int i = 0; i < n - 1; i++)
    {
        while (a[i] * 2 < a[i + 1])
        {
            ans++;
            a[i] *= 2;
        }
    }
    cout << ans << "\n";
}

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        testcase();
    }
}