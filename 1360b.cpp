#include<bits/stdc++.h>       //RoY
using namespace std;
main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        int temp;
        for(int i=1;i<=n;i++){
            for(int j=i+1;j<=n;j++){
                if(a[i]>a[j]){
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
        int min=a[n]-a[n-1];
        for(int i=1;i<=n;i++){
            for(int j=i+1;j<=n;j++){
                if(a[j]-a[i]<min)
                    min=a[j]-a[i];
            }
        }
        cout<<min<<endl;
    }
}

