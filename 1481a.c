#include<iostream>
using namespace std;
main(){
int t,x,y;
string s;
cin>>t;
while(t--){
    cin>>x>>y;
    cin>>s;
    int u=0,d=0,r=0,l=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='U')
            u++;
        else if(s[i]=='D')
            d++;
        else if(s[i]=='L')
            l++;
        else
            r++;
    }
    if(x>0 && r>=x)
        x=0;
    else if(x<0 && l>=-x)
        x=0;
    else if(y>0 && u>=y)
        y=0;
    else if(y<0 && d>=-y)
        y=0;
    if(x!=y)
        printf("YES\n");
    else
        printf("NO\n");
}
}
