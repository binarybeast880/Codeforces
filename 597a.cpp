#include <bits/stdc++.h>
using namespace std;
main()
{ //time limit exceeded
    signed long long k, a, b, i, c = 0;
    cin >> k >> a >> b;
    for (i = a; i <= b; i++)
    {
        if (i % k == 0)
            c++;
    }
    cout << c;
}