#include<bits/stdc++.h>  //RoY
using namespace std;
main(){
int t;
string s;
cin>>t;
while(t--){
    cin>>s;
    cout<<s[0];
    for(int i=1;i<s.length();i++){
        if(s[i]==s[i+1]){
            cout<<s[i];
        i++;
        }
    }
    cout<<s[s.length()-1]<<endl;
}
}
