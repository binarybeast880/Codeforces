#include <bits/stdc++.h>
using namespace std;
main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int c = 0;
    for (int i = 0; i < n; ++i)
    {
        if (s[i] == ')' && s[i + 1] == ')')
        {
            c += 2;
            i++;
        }
        else if (s[i] == '(' && s[i + 1] == '(')
        {
            c += 2;
            i++;
        }
    }
    if (c <= 2)
        cout << "-1";
    else
        cout << c;
}