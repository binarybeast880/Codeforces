#include <bits/stdc++.h>
using namespace std;
main()
{
    string s;
    cin >> s;
    int maxdis = 1;
    for (int i = 0; i < s.length(); i++)
    {
        int dis = 0;
        if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'Y')
        {
            for (int j = i; j < s.length(); j++)
            {
                if (s[j] != 'A' && s[j] != 'E' && s[j] != 'I' && s[j] != 'O' && s[j] != 'U' && s[j] != 'Y')
                    dis++;
                if (dis > maxdis)
                    maxdis = dis;
            }
        }
    }
    cout << maxdis << endl;
}