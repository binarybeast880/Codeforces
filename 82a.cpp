#include <bits/stdc++.h>
using namespace std;
main()
{
    int n;
    cin >> n;
    if (n %)
        cout << "Sheldon" << endl;
    else if (n % 5 == 2)
        cout << "Leonard" << endl;
    else if (n % 5 == 3)
        cout << "Penny" << endl;
    else if (n % 5 == 4)
        cout << "Rajesh" << endl;
    else if (n % 5 == 5)
        cout << "Howard" << endl;
}