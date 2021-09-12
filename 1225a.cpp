#include <bits/stdc++.h>
using namespace std;
main()
{
    int da, db;
    cin >> da >> db;
    if (da == 9 && db == 1)
        cout << "9"
             << " "
             << "10";
    else if (da == db)
        cout << da * 10 + 1 << " " << db * 10 + 2;
    else if (da + 1 == db)
        cout << da * 10 + 9 << " " << db * 10;
    else
        cout << "-1";
}