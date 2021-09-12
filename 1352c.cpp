#include <bits/stdc++.h>
using namespace std;
main()
{
    int t, n, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        long long int i;
        vector<int> ans;
        for (i = 1; i <= 1000; i++)
        {
            if (i % n != 0)
                ans.push_back(i);
        }
        cout << ans[k - 1] << endl;
    }
}