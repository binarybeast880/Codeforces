#include <bits/stdc++.h>
using namespace std;

void testcase()
{
    int n;
    cin >> n;
    int cnt = 0;
    int a[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (a[i] * a[j] == i + j)
            {
                cnt++;
            }
        }
    }
    cout << cnt << endl;
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