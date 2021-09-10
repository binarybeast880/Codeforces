//RoY CODE

#include<bits/stdc++.h>
using namespace std;
main(){
char ch;
string s1;
cin>>ch;
string s2="qwertyuiopasdfghjkl;zxcvbnm,./";
cin>>s1;
for(int i=0;i<s1.length();i++){
    for(int j=0;j<s2.length();j++){
            if(s1[i]==s2[j]){
        if(ch=='L'){
                cout<<s2[j+1];
        }
        else if(ch=='R'){
            cout<<s2[j-1];
        }
    }
}
}
}

