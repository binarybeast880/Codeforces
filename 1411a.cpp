#include <bits/stdc++.h> //Accepted
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
        int c = 0;
        for (int i = s.length() - 1; i >= 0; i--)
        {
            if (s[i] == ')')
                c++;
            if (s[i] >= 'a' && s[i] <= 'z')
                break;
        }
        if (c > s.length() / 2)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}