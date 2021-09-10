#include <bits/stdc++.h>
using namespace std;
main()
{
    int m, s;
    cin >> m >> s;
    int lower_limit = pow(10, m - 1); // --->10
    int upper_limit = pow(10, m);     //  --->99
    cout << upper_limit << endl;
    int sum = 0;
    for (int i = upper_limit; i >= lower_limit; i--)
    {
        int sum = 0;
        int flag = i;
        while (i > 0)
        {
            int rem = i % 10;
            sum += rem;
            i /= 10;
        }
        // cout << "Sum = " << sum << endl;
        if (sum == s)
        {
            cout << flag << " ";
            int rev = 0;
            while (flag > 0)
            {
                rev = rev * 10 + flag % 10;
                flag /= 10;
            }
            cout << rev;
        }
    }
    cout << "-1"
         << " "
         << "-1";
}