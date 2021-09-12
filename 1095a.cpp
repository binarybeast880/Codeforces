#include <bits/stdc++.h>
using namespace std;
main()
{
    int n;
    string s;
    cin >> n;
    cin >> s;
    int k = 1;
    for (int i = 0; i < s.length(); i += k)
    {
        printf("%c", s[i]);
        k++;
    }
}