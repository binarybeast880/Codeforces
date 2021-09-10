#include <bits/stdc++.h>
using namespace std;
main()
{
    string s;
    cin >> s;
    int l = s.length();
    if (s[0] == s[l - 1])
    {
        cout << "-1";
    }
    else if (l % 2 == 1)
    {
        swap(s[l - 2], s[l - 1]);
        cout << s;
    }
    else if (l % 2 == 0)
    {
        swap(s[0], s[l - 1]);
        cout << s;
    }
}