#include <bits/stdc++.h>
using namespace std;
main()
{
    int t, n, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        int c = k - 1;
        while (c--)
        {
            int rem, max = 1, min = 9, temp = n;
            while (temp > 0)
            {
                rem = temp % 10;
                if (rem < min)
                    min = rem;
                if (rem > max)
                    max = rem;
                temp /= 10;
            }
            n += max * min;
        }
        cout << n << endl;
    }
}