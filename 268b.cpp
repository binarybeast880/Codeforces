#include <bits/stdc++.h>
using namespace std;
main()
{
    int n;
    cin >> n;
    if (n % 2 == 0)
        cout << 2 * n - 1;
    else
        cout << 2 * n + 1;
}