#include <bits/stdc++.h>
using namespace std;

void testcase()
{
    long long int r, b, d;
    cin >> r >> b >> d;
    if (r > b)
    {
        swap(r, b);
    }
    if (b > (d + 1) * r)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
}

main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        testcase();
    }
}