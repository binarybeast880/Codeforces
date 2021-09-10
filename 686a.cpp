/*


5 7  
+ 5
- 10
- 20
+ 40
- 20


*/
#include <bits/stdc++.h>
using namespace std;
main()
{
    int t, c;
    cin >> t >> c;
    char ch;
    int candy, left = 0;
    while (t--)
    {
        cin >> ch >> candy;
        if (ch == '+')
            c += candy;
        else if (ch == '-')
        {
            if (c < 0)
                left++;
            else
                c -= candy;
        }
    }
    cout << c << " " << left << endl;
}