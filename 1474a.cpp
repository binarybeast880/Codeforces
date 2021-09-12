#include <bits/stdc++.h>
using namespace std;

void test_case()
{
    int n;
    string b;
    cin >> n;
    cin >> b;
    string a = "1";
    for (int i = 1; i < n; i++)
    {
        if ('1' + b[i] != a[i - 1] + b[i - 1])
            a += "1";
        else
            a += "0";
    }
    cout << a << endl;
}

main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        test_case();
    }
}