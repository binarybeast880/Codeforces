
#include <bits/stdc++.h>
using namespace std;
main(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	if(n>1){
		cout<<"2"<<endl;
		for(int i=0;i<n/2;i++){
			cout<<s[i];
		}
		cout<<" ";
		for(int i=n/2;i<n;i++){
			cout<<s[i];
		}
		cout<<endl;
	}
	else if(n==1){
		cout<<"1"<<endl;
	cout<<s<<endl;
	}
	return 0;
}
