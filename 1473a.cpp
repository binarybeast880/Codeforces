#include<bits/stdc++.h>
using namespace std;
main(){
    int t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        int a[n],sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        if(sum/n<=k)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}