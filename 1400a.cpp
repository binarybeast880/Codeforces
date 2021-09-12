
#include<bits/stdc++.h>
using namespace std;

void test_case(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	string ans;
	for(int i=0;i<s.size();i+=2){
		ans+=s[i];
		if(ans.size()==n)
            break;
	}
	cout<<ans<<endl;
}

main(){
int t;
cin>>t;
while(t--){
	test_case();
}
}
