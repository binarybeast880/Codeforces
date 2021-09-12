#include<bits/stdc++.h>
using namespace std;
void solve(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;++i){
    cin>>a[i];
}
int xorr;
for(int i=0;i<n;i++){
    xorr^=a[i];
}
if(xorr==0)
    cout<<"YES"<<endl;
else
    cout<<"NO"<<endl;
}
main(){
int t;
cin>>t;
while(t--){
    solve();
}
}
