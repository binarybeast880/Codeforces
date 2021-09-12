#include <bits/stdc++.h>
using namespace std;
main()
{
    long long int n, i, j;
    scanf("%lld", &n);
    long long int a[n];
    for (i = 0; i < n; i++)
    {
        // cin >> a[i];
        scanf("%lld", &a[i]);
    }
    sort(a, a + n);
    long long int max = a[n - 1], min = a[0];
    long long int max_difference = max - min;
    long long int total_max = 0, total_min = 0, ans = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (abs(a[i] - a[j]) == max_difference)
    //             ans++;
    //     }
    // }
    for (i = 0; i < n; i++)
    {
        if (a[i] == min)
            total_min++;
        else if (a[i] == max)
            total_max++;
    }
    if (max == min)
    {
        cout << "0"
             << " " << (long long)n * (n - 1) / 2;
    }
    else
    {
        cout << (long long)max_difference << " " << (long long)total_max * total_min;
    }
    //     for (i = 0; i < n; i++)
    //     {
    //         if (a[i] == min)
    //             total_min++;
    //         else if (a[i] == max)
    //             total_max++;
    //     }
    //     int total_pairs;
    //     if (total_max < total_min)
    //         total_pairs = total_max;
    //     else if (total_min < total_max)
    //         total_pairs = total_min;
    //     else if (total_min == total_max)
    //         total_pairs = total_max;
    //     // else if (total_max == total_min)
    //     //     total_pairs = total_min;
    //     cout << max_difference << " " << total_pairs*total_pairs;
    // }
}