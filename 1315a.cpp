#include<bits/stdc++.h>
using namespace std;

void test_case(){
    int a,b,x,y;
    cin>>a>>b>>x>>y;
    cout<<max(max(x,a-1-x)*b,max(y,b-1-y)*a)<<endl;
}

main(){
    int t;
    cin>>t;
    while(t--){
        test_case();
    }
}