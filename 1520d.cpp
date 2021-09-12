#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	cin>>n;
	map<int, int> a;
  long long res = 0;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    x -= i;
    res += a[x];
    a[x]++;
  }
  cout << res << endl;
}
main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}

