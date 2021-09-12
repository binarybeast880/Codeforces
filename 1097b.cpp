#include <bits/stdc++.h>
using namespace std;
main()
{
    int n;
    cin >> n;
    int a, b, c;
    cin >> a >> b >> c;
    int test1 = a + b + c;
    int test2 = a + b - c;
    int test3 = a - b - c;
    int test4 = a - b + c;
    if (test1 % 360 == 0)
        cout << "YES";
    else if (test2 % 360 == 0)
        cout << "YES";
    else if (test3 % 360 == 0)
        cout << "YES";
    else if (test4 % 360 == 0)
        cout << "YES";
    else
        cout << "NO";
}