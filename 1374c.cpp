#include<iostream>
using namespace std;
main(){
int t,n;
cin>>t;
while(t--){
    cin>>n;
    string s;
    for(int i=0;i<n;i++){
    cin>>s[i];
    }
    int ans=0,bal=0;
    for(int i=0;i<n;i++){
        if(s[i]=='(')
            bal++;
        else
        bal--;
        if(bal<0){
            bal=0;
            ans++;
        }
    }
    cout<<ans<<endl;
}
}

