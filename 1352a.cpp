#include<bits/stdc++.h>
using namespace std;
main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int dig=0;
        while(n>0){
            dig++;
            n/=10;
        }
        int a[dig];
        while(n>0){
            a=10;


            a[dig]=n%10;
        }
    }
}