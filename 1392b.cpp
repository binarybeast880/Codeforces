#include<bits/stdc++.h>
using namespace std;
void solve(){
	long long int n,d;
	cin>>n>>d;
	long long int a[n];
	for(long long int i=0;i<n;i++){
		cin>>a[i];
	}
	long long int maxi=*max_element(a,a+n);
	for(long long int i=0;i<n;i++){
		a[i]=maxi-a[i];
	}
	for(long long int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
