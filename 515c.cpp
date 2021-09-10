#include <bits/stdc++.h>
using namespace std;
main()
{
    int n;
    cin >> n;
    int fact = 1;
    while (n > 0)
    {
        int rem = n % 10;
        int facto = 1;
        while (rem > 0)
        {
            facto *= rem;
            rem--;
        }
        fact *= facto;
    }
    cout << fact << endl;
}