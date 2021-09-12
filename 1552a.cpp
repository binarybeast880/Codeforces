#include <bits/stdc++.h>
using namespace std;
main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        string s;
        cin >> s;
        string s2 = s;
        sort(s2.begin(), s2.end());
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cnt += (s[i] != s2[i]);
        }
        cout << cnt << endl;
    }
}