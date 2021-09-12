#include<bits/stdc++.h>
using namespace std;
main(){
    int t,n;
    cin>>t;
    while(t--){
        bool flag=0;
        cin>>n;
        int a[n];
        int b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[i]=a[i];
        }
        sort(b,b+n);
        int l;
        for(l=0;l<n;l++){
            if(flag)
            break;
            else{
                if(l<n-1 && b[l-1]!=b[l] && b[l]!=b[l+1]){
                    for(int j=0;j<n;j++){
                        if(a[j]==b[l]){
                            cout<<j+1<<endl;
                            flag=1;
                            break;
                        }
                    }
                }
                else if(l==n-1 && b[l-1]!=b[l]){
                for(int j=0;j<n;j++)
                if(a[j]==b[l]){
                    cout<<j+1<<endl;
                    flag=1;
                    break;
                    }
                }
            }
        }
            if(!flag)
            cout<<"-1"<<endl;
        }
}