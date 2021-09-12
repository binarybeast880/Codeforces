#include<bits/stdc++.h>
using namespace std;
int n;
string s;
int main(){
int tc;
cin>>tc;
for(int i=0;i<tc;i++){
    cin>>n>>s;
    int pos=n;
    for(int i=0;i<n;i++){
    if(s[i]=='8'){
        pos=i;
        break;
    }
}
if(n-pos>=11)
    cout<<"YES\n";
else
    cout<<"NO\n";
}
}
