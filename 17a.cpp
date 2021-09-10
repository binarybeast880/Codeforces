#include <bits/stdc++.h>
using namespace std;
main()
{
    int n, k;
    cin >> n >> k;
    int c = 0;
    for (int i = 2; i < n; i++)
    {
        int count = 0;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                count = 1;
                break;
            }
        }
        if (count == 1)
            c++;
    }
    if (c >= k)
        cout << "YES";
    else
        cout << "NO";
}