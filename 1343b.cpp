
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void testcase(){
ll n;
cin>>n;
if(n%4!=0){
    cout<<"NO"<<endl;
}
else{
        n/=2;
    cout<<"YES"<<endl;
for(int i=1;i<=n;i++){
    cout<<i*2<<" ";
}
for(int i=1;i<n;i++){
    cout<<i*2-1<<" ";
}
cout<<3*n-1;
cout<<endl;
}
}
main(){
int t;
cin>>t;
while(t--){
    testcase();
}
}
