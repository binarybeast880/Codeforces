#include <bits/stdc++.h>
using namespace std;
main()
{
    int n, m;
    cin >> n >> m;
    if (n < m)
        cout << "-1" << endl;
    else
        cout << n / m + 1 << endl;
}