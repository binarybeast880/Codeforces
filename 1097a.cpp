#include<iostream>
using namespace std;
int main(){
int flag=0;
string s1,s2;
cin>>s1;
for(int i=0;i<5;i++){
    cin>>s2;
    if(s1[0]==s2[0]||s1[1]==s2[1])
        flag=1;
}
if(flag)
    cout<<"YES"<<endl;
else
    cout<<"NO"<<endl;
}


