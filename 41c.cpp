#include <bits/stdc++.h>
using namespace std;
main()
{
    string s;
    cin >> s;
    for (int i = 1; i < s.length(); ++i)
    {
        if (s[i] == 'a' && s[i + 1] == 't')
        {
            s[i] = '@';
            s[i + 1] = '-';
            break;
        }
    }
    for (int i = 1; i < s.length()-3; ++i)
    {
        if (s[i] == 'd' && s[i + 1] == 'o' && s[i + 2] == 't')
        {
            s[i] = '.';
            s[i + 1] = '-';
            s[i + 2] = '-';
        }
    }
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != '-')
            cout << s[i];
    }
}