#include <bits/stdc++.h>
using namespace std;
main()
{
    string str;
    cin >> str;
    int sum = 0;
    char ch = 'a';
    for (int i = 0; i < str.length(); ++i)
    {
        if (abs(ch-str[i]) > 13)
        {
            sum+= 26 -abs(str[i]-ch) ;
        }
        else{ sum+=abs(str[i]-ch);
        }
        ch=str[i];
    }
    cout << sum;
}