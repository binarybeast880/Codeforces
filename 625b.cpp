#include <bits/stdc++.h>
using namespace std;
main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 2; j < n; j += 2)
        {
            if (a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    int tempu;
    for (int i = 1; i < n; i++)
    {
        for (int j = i + 2; j < n; j += 2)
        {
            if (a[i] > a[j])
            {
                tempu = a[i];
                a[i] = a[j];
                a[j] = tempu;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}