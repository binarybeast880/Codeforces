#include<bits/stdc++.h>
using namespace std;
main(){
int n;
cin>>n;
int a[n+1];
for(int i=1;i<=n;i++){
    cin>>a[i];
}
sort(a+1,a+n+1);
int q;
cin>>q;
while(q--){
    int coin;
    cin>>coin;
    int ind=upper_bound(a+1,a+n+1,coin)-a;
		ind--;
		cout<<ind<<endl;
}
}
