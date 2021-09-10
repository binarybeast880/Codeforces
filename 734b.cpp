#include <bits/stdc++.h> //Accepted
using namespace std;
main()
{
    int a, b, c, d, sum = 0;
    cin >> a >> b >> c >> d;
    if (a == b && b == c && c == d)
        while (a--)
        {
            sum += 256;
        }
    else
    {
        int minv = min(d, min(a, c));
        d -= minv;
        a -= minv;
        c -= minv;
        while (minv--)
        {
            sum += 256;
        }
        int min3 = min(a, b);
        while (min3--)
        {
            sum += 32;
        }
    }
    cout << sum;
}