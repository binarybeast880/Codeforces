#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
ll n,m,x;
cin>>n>>m>>x;
x--;
ll col=x/n;
ll row=x%n;
cout<<(ll)row*m+col+1<<endl;
}

main(){
int t;
cin>>t;
while(t--){
    solve();
}
}
