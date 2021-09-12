#include <bits/stdc++.h>
using namespace std;

void testcase()
{
    float a, b, c;
    cin >> a >> b >> c;
    int k = (a + b + c);
    cout << ((a + b + c) % 9 == 0 && min({a, b, c}) >= ((a + b + c) / 9) ? "YES" : "NO") << endl;
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