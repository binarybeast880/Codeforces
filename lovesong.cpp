#include<bits/stdc++.h>
using namespace std;
main(){
int len,t;
cin>>len>>t;
string s;
cin>>s;
while(t--){
    int up,lo;
    cin>>up>>lo;
    int sum=0;
    for(int i=up-1;i<lo;i++){
        sum+=abs(96-s[i]);
    }
    cout<<sum<<endl;
}
}


