#include <bits/stdc++.h>
using namespace std;
main()
{
    int n;
    cin >> n;
    int a[n], count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        if (a[i] == a[i + 1])
            count++;
    }
    if (n == 1)
        cout << "1" << endl;
    else
        cout << count << endl;
}