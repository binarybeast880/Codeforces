// #include<bits/stdc++.h>
// using namespace std;

// void test_case(){
//     int n;
//     cin>>n;
//     int a[n];
//     // for(int i=0;i<n;i++){
//         // cin>>a[i];
//     // }
//     int max=INT_MAX,min=INT_MIN,maxfromfirst,minfromfirst;
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//         if(a[i]<min){
//             min=a[i];
//             minfromfirst=i;
//         }
//         if(a[i]>max){
//             max=a[i];
//             maxfromfirst=i;
//         }
//     }
//     minfromfirst++;
//     maxfromfirst++;
//     // int totalmovesfromfirst=max(maxfromfirst,minfromfirst);
//     // int totalmovesfromfirst;
//     // if(maxfromfirst>minfromfirst){
//     //     totalmovesfromfirst=maxfromfirst;
//     // }
//     // else{
//     //     totalmovesfromfirst=minfromfirst;
//     // }
//     // int maxfromlast,minfromlast,totalmovesfromlast;
//     // for(int i=n-1;i>=0;i--){
//     //     if(a[i]==max){
//     //         maxfromlast=i;
//     //     }
//     //     if(a[i]==min){
//     //         minfromlast=i;
//     //     }
//     // }
//     // if(maxfromlast>minfromlast)
//     // totalmovesfromlast=maxfromlast;
//     // else
//     // totalmovesfromlast=minfromlast;
//     // int ans;
//     // if(totalmovesfromlast<totalmovesfromfirst)
//     // ans=totalmovesfromlast;
//     // else
//     // ans=totalmovesfromfirst;
//     // // int ans=min(totalmovesfromfirst,totalmovesfromlast)<<endl;
//     // cout<<ans<<endl;
//     // int disfromfirst1,disfromlast1,disfromlast2,disfromfirst2;
//     // for(int i=0;i<n;i++){
//     //     if(a[i]==min){
//     //         if(maxfromfirst<maxfromlast)
//     //         disfromfirst1=maxfromfirst;
//     //         else
//     //         disfromfirst1=maxfromlast;
//     //     }
//     //     else if(a[i]==max){
//     //         if(minfromlast<minfromfirst)
//     //         disfromfirst1=minfromlast;
//     //         else
//     //         disfromfirst1=minfromfirst;
//     //     }
//     // }
//     // for(int i=n-1;i>=0;i--){
//     //     if(a[i]==min){
//     //         if(maxfromfirst<maxfromlast)
//     //         disfromfirst2=maxfromlast;
//     //         else
//     //         disfromfirst2=maxfromfirst;
//     //     }
//     //     else if(a[i]==max){
//     //         if(minfromlast<minfromfirst)
//     //         disfromfirst2=minfromlast;
//     //         else
//     //         disfromfirst2=minfromfirst;
//     //     }
//     // }
//     // int dis;
//     // if (disfromfirst1<disfromfirst2)
//     // dis=disfromfirst1;
//     // else
//     // dis=disfromfirst2;
//     // cout<<dis<<endl;
//     long long int a,b,c;
//     if(maxfromfirst>minfromfirst)
//     long long a=maxfromfirst;
//     else
//     long long a=minfromfirst;
//     // int a=max(minfromfirst,maxfromfirst);
//     if((n-minfromfirst)>(n-maxfromfirst)){
//         long long b=(n-minfromfirst)+1;
//     }
//         else
//         long long b=(n-maxfromfirst)+1;
//     }
//     if()
// }

// main(){
//     int t;
//     cin>>t;
//     for(int i=1;i<=t;i++){
//         test_case();
//     }
// }

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
main(){
ll t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    ll mn=INT_MAX, mx=INT_MIN;
    ll x,y;
    ll arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]<mn){
            mn=arr[i];
            x=i;
        }
        if(arr[i]>mx){
            mx=arr[i];
            y=i;
        }
    }
    x+=1;
    y+=1;
    ll a,b,c;
    a=max(x,y);
    b=max(n-x,n-y)+1;
    c=min(x,y)+n-max(x,y)+1;
    cout<<min(a,min(b,c))<<endl;
}
}