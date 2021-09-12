#include <bits/stdc++.h>
using namespace std;

void testcase()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (i % 2 == 0)
        {
            s[i] = s[i] == 'a' ? 'b' : 'a';
        }
        else
        {
            s[i] = s[i] == 'z' ? 'y' : 'z';
        }
    }
    cout << s << endl;
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