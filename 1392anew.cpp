#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;
	vector<int>a(n);
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
	sort(a.begin(),a.end());
	if(a[0]==a[n-1])
		cout<<n<<endl;
	else
		cout<<1<<endl;

}

main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
