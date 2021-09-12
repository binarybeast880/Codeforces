#include<bits/stdc++.h>
using namespace std;

void testcase(){
    int n;
    cin>>n;
    string s[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>s[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(s[i][j]=='*'){
                if(s[i][j+1]=='.'){
                    s[i][j+1]=='*';
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<s[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<endl;
}


main(){
    int t;
    cin>>t;
    while(t--){
        testcase();
    }
}