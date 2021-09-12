#include <bits/stdc++.h>
using namespace std;
void testcase()
{
    int n;
    cin >> n;
    int flag = 0;
    for (int i = 0; i * 111 <= n; i++)
    {
        if ((n - i * 111) % 11 == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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