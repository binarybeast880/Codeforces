// #include<bits/stdc++.h>
// using namespace std;
// main(){
//     int t,n;
//     cin>>t;
//     while(t--){
//         cin>>n;
//         int a[n];
//         for(int i=0;i<n;++i){
//             cin>>a[i];
//         }
//         int flag=0;
//         for(int i=0;i<n-1;i++){
//             if(a[i]<=a[i+1]){
//                 flag=1;
//                 break;
//             }
//         }
//         if(flag)
//         cout<<"YES"<<endl;
//         else
//         cout<<"NO"<<endl;
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
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        bool sorted = true;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] <= a[i + 1])
            {
                sorted = false;
                break;
            }
        }
        cout << (sorted ? "NO" : "YES") << endl;
    }
}