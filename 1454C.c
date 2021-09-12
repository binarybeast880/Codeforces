#include<bits/stdc++.h>
using namespace std;
int us[2000005]={0};
int a[200005]={0};
int main(){
	int t;
	cin>>t;
	for(int i=1;i<=t;i++){
		int n;
		queue<int>que;
		cin>>n;
		int p;
		for(int j=1;j<=n;j++){
			int b;
			cin>>b;
			if(us[b]==0){
				us[b]=j;
				que.push(b);
				if(j>1)
				a[b]++;
			}
			if(j>1&&j<n){
				if(j-us[b]>1){

				a[b]++;
			}
			us[b]=j;
			}
			if(j==n){
				p=b;
				if(j-us[b]>1){

				a[b]++;
			}
			us[b]=j;
			}
		}

		int minn=10000000;
		while(!que.empty()){
			int u=que.front();
			que.pop();
			if(u!=p)
			a[u]++;
			if(a[u]<minn){
				minn=a[u];
			}
			a[u]=0;
			us[u]=0;
		}
		cout<<minn<<endl;
	}
}
