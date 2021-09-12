#include<iostream>                                        //done
using namespace std;
main(){
int t,n;
cin>>t;
while(t--){
    cin>>n;
    int a[n],cmin=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int min=a[0];
    for(int i=0;i<n;i++){
        if(a[i]<min)
            min=a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]==min)
            cmin++;
    }
    cout<<n-cmin<<endl;
}
}
