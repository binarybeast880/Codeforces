#include<bits/stdc++.h>
using namespace std;
main(){
	int n,d;
	cin>>n>>d;
	int a[n-1],sum=0;
	for(int i=0;i<n-1;i++){
		cin>>a[i];
	}
	for(int i=1;i<n-1;i++){
		sum+=a[i];
		if(sum==d){
            cout<<"YES"<<endl;
            return 0;
		}
		  i = a[i-1]+i;
        if(i > n)
            break;
	}
		cout<<"NO"<<endl;
}
