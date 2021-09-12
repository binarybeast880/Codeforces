#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void test(){
ll n;
cin>>n;
ll temp=n;
ll sum=0;
while(n>0){
    sum+=n%10;
    n/=10;
}
ll gcd=temp%sum;
ll bh=temp/sum;
ll  ans=bh*sum;
if(temp-ans>1)
    cout<<
ll g=
if(gcd>1)
cout<<temp%sum<<endl;
}

main(){
int t;
cin>>t;
while(t--){
    test();
}

}
