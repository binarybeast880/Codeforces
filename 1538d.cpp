#include<bits/stdc++.h>
using namespace std;

void solve(){
int a,b,k;
cin>>a>>b>>k;
int cnt,gcd;
if(a==b)
    cnt=0;
else if(a!=b){
    if(a>b){
        gcd=a%b;
        if(gcd==b)
            cnt=1;
    }
    else {
        gcd=b%a;
        if(gcd==a)
            cnt=1;
}
}
else
    cnt=2;
    if(cnt>0 && cnt<3)
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
