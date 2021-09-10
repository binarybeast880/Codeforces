#include <bits/stdc++.h>
using namespace std;
main()
{
    int n, a, b, c = 0;
    cin >> n;
    while (n--)
    {
        cin >> a >> b;
        if (a == b)
            c++;
    }
    if (c == n)
        cout << "Poor Alex" << endl;
    else
        cout << "Happy Alex" << endl;
}
