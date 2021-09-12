#include <bits/stdc++.h>
using namespace std;

void testcase()
{

    int n;
    cin >> n;
    int a[n], max = -10000;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    // int cnt = 0;
    // for (int i = 0; i < n - 1; i++)
    // {
    //     if (a[i] != a[i + 1])
    //         cnt++;
    // }
    // if (cnt == 0)
    // {
    //     cout << "-1" << endl;
    // }
    // else
    // {
        int pos=-1;
        // if (a[0] == max)
        // {
        //     pos = 1;
        // }
        // else if (a[n - 1] == max)
        // {
        //     pos = n ;
        // }
        // else
        // {
            for (int i = 0; i < n ; i++)
            {
                if(a[i]==max){
                if (i>0 && a[i-1]!=max)
                {
                    pos = i + 1;
                    // break;
                }
                if (i<n-1 && a[i+1]!=max)
                {
                    pos = i+1;
                    // break;
                }
                }
            }
        cout << pos << endl;
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