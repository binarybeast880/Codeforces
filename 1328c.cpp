
#include<bits/stdc++.h>
using namespace std;
void test_case(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	string s1,s2;
	for (int i = 0; i < n; ++i) {
			if (s[i] == '1') {
				s1[i] = '1';
				s2[i] = '0';
				for (int j = i + 1; j < n; ++j) {
					s2[j] = s[j];
				}
				break;
			} else {
				s1[i] = s2[i] = '0' + (s[i] - '0') / 2;
			}
		}
		cout<<s1<<endl;
		cout<<s2<<endl;
}

main(){
	int t;
	cin>>t;
	while(t--){
		test_case();
	}
}
