#include <bits/stdc++.h>
using namespace std;
main()
{
    int n, m;
    cin >> n >> m;
    vector<int> first;
    vector<int> second;
    while (n > 0)
    {
        int rem = n % 10;
        first.push_back(rem);
        n /= 10;
    }
    while (m > 0)
    {
        int rem2 = m % 10;
        second.push_back(rem2);
        m /= 10;
    }
    int c = 0;
    for (int i = 0; i < first.size(); i++)
    {
        for (int j = 0; j < second.size(); j++)
        {
            if (first[i] == second[j])
                c++;
            if (c == first.size())
            {
                cout << "OK";
                return 0;
            }
        }
    }
    cout << "WRONG ANSWER";
}