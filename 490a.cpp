#include <bits/stdc++.h>
using namespace std;
main()
{
    int n;
    cin >> n;
    int a[n], c1 = 0, c2 = 0, c3 = 0;
    vector<int> x;
    vector<int> y;
    vector<int> z;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        if (a[i] == 1)
        {
            c1++;
            x.emplace_back(i + 1);
        }
        else if (a[i] == 2)
        {
            c2++;
            y.emplace_back(i + 1);
        }
        else if (a[i] == 3)
        {
            c3++;
            z.emplace_back(i + 1);
        }
    }
    int m = min(min(c1, c2), c3);
    cout << m << endl;
    if (m > 0)
    {
        for (int i = 0; i < m; i++)
        {
            cout << x[i] << " " << y[i] << " " << z[i] << endl;
        }
    }
}