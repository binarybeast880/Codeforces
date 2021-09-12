#include <bits/stdc++.h>
using namespace std;

void testcase()
{
    int a, b;
    cin >> a >> b;
    /*

a=a/b;
b=b+1;

*/

    if (a < b)
        cout << "1" << endl;
    else if (a == b)
        cout << "2" << endl;
    else if (a > b)
    {
        int cnt = 0;
        while (b < 2)
        {
            b += 1;
            cnt += 1;
        }
        while (a > 0)
        {
            a /= b;
            cnt += 1;
        }
        cout << cnt << endl;
    }
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