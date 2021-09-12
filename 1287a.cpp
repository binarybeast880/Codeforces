#include <bits/stdc++.h>
using namespace std;
main()
{
    int t, n;
    string s;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cin >> s;
        int a = 0, p = 0, count = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'P')
                p++;
            else if (s[i] == 'A')
                a++;
        }
        while (p > a)
        {
            p--;
            a++;
            count++;
        }
        cout << count << endl;
    }
}