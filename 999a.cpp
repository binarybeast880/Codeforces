#include <bits/stdc++.h>
using namespace std;
main()
{
    int n, k, f = 0, l = 0;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    int posf=0,posl=0;
    for (int i = 0; i < n; ++i)
    {
        if (a[i] <= k){
            posf++;
            f++;
        }
        else
            break;
    }
    for (int i = n - 1; i >= posf; i--)
    {
        if (a[i] <= k)
            l++;
        else
            break;
    }
    cout << f + l;
}