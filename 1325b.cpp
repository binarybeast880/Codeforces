// #include<bits/stdc++.h>
// using namespace std;
// main(){
//     int t,n;
//     cin>>t;
//     set<int>ans;
//     while(t--){
//         cin>>n;
//         int a[n];
//         for(int i=0;i<n;i++){
//             cin>>a[i];
//             ans.insert(a[i]);
//         }
//         cout<<ans.size()<<endl;
//     }
// }
#include <bits/stdc++.h>
using namespace std;
main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == a[i + 1])
                c++;
        }
        cout << n - c << endl;
    }
}