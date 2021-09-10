#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,a;
    cin>>t>>n;
    int sum=0;
    int ans=0;
    while(t--){
        cin>>a;
        sum=(86400-a)+sum;
        ans++;
        if(n<=sum)
        {
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}
