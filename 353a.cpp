#include <bits/stdc++.h>
using namespace std;
main()
{
    int n, a, b;
    cin >> n;
    int countfirst = 0, countsecond = 0;
    while (n--)
    {
        cin>>a>>b;
        countfirst+=a;
        countsecond+=b;
    }
    if(countfirst%2==1 && countsecond%2==1)
    cout<<"1";
    else if(countfirst%2==1 && countsecond%2==0)
    cout<<"-1";
    else if(countfirst%2==0 && countsecond%2==1)
    cout<<"-1";
    else if(countfirst%2==0 && countsecond%2==0)
    cout<<"0";
}