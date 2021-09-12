#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    long long int i,j;
    int ans=0;
    for(i=1;i<=n;i=i*10+1){
        for(j=1;j<=9;j++){
            if((long long)i*j<=n)
            ans++;
        }
    }
    cout<<ans<<endl;
}

main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
