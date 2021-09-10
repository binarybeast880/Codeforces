#include<iostream>
using namespace std;
int main(){
int a,b,ans;
cin>>a>>b;
ans=a+b;
if(a==b)
    ans=a+1;
else if(ans%2==0)
    ans+=1;
else
    ans-=1;
cout<<ans<<endl;
}
