#include <bits/stdc++.h>
using namespace std;

void testcase()
{
    string s;
    cin >> s;

    int flag = 0;
    for (int i = 1; i < s.length() - 1; ++i)
    {
        if (s[i - 1] != '?' && s[i] == '?' && s[i + 1] != '?')
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
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