#include <bits/stdc++.h>
using namespace std;
int a[1234567];
main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        if (a[a[a[i]]] == i)
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}