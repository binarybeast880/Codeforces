#include<iostream>
using  namespace std;
main(){
int n,m,k,t;
cin>>t;
while(t--){
cin>>n>>m>>k;
if(n*m-1==k)
    cout<<"YES"<<endl;
else cout<<"NO"<<endl;
}
}
