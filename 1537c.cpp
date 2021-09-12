#include <bits/stdc++.h>
using namespace std;

void testcase()
{

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int max = a[0], min = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
            max = a[i];
        if (a[i] < min)
            min = a[i];
    }
    int pos;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == max)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[j] == min)
                {
                    a[i] = a[j - 1];
                    a[j - 1] = max;
                    break;
                }
            }
        }
        else if (a[i] == min)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[j] == max)
                {
                    a[i] = a[j - 1];
                    a[j - 1] = min;
                    break;
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        testcase();
    }
}
