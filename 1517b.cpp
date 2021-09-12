#include<bits/stdc++.h>
using namespace std;
main(){
int t;
cin>>t;
while(t--){
int n,m;
cin>>n>>m;
for(int i=1;i<=n;i++){
    int a[m];
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    sort(a,a+m);
    if(i%2==1){
    for(int i=0;i<m;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
else{
    for(int i=m-1;i>=0;i--){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
}
}
}
