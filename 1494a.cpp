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
        int ans = 0;
        for (int i = 0; i < s.length() - 2; i+=2)
        {
            if (s[i] == s[i + 1])
                ans++;
            else
                ans--;
            if (ans < 0)
            {
                break;
            }
        }
        if (ans < 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}