#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s1, s2;
    cin >> s1;
    cin >> s2;
    int n1 = s1.length(), n2 = s2.length();
    vector<char> ans1;
    vector<char> ans2;
    if (n1 > n2)
    {
        for (int i = 0; i < n2; i++)
        {
            if (s2[i] == s1[i])
                ans1.emplace_back(s1[i]);
            else
                break;
        }
    }
    else if (n2 >= n1)
    {
        for (int i = 0; i < n1; i++)
        {
            if (s1[i] == s2[i])
                ans2.emplace_back(s1[i]);
            else
                break;
        }

        if (ans1.size() % 2 == 0 && ans2.size() % 2 == 0)
        {
            if (n1 > n2)
            {
                for (int i = 0; i < ans1.size(); i++)
                {
                    cout << ans1[i] << endl;
                }
            }
        }
        else if (ans1)
    }
}
}

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}