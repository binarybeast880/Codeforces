#include<iostream>
using namespace std;
main(){
int t,n,m,r,c,d;
cin>>t;
while(t--){
    cin>>n>>m>>r>>c;
    d=max(r-1,n-r)+max(c-1,m-c);
    cout<<d<<endl;
}
}
