#include <bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int cnt = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '[')
            {
                for (int j = i + 1; j < s.length(); j++)
                {
                    if (s[j] == ']')
                    {
                        s[i] = '0';
                        s[j] = '0';
                        cnt++;
                        break;
                    }
                }
            }
            if (s[i] == '(')
            {
                for (int j = i + 1; j < s.length(); j++)
                {
                    if (s[j] == ')')
                    {
                        s[i] = '0';
                        s[j] = '0';
                        cnt++;
                        break;
                    }
                }
            }
        }
        cout << cnt << endl;
    }
}