#include<bits/stdc++.h>
using namespace std;
main(){
    long long int a,b,c;
    cin>>a>>b>>c;
    cout<<(long long)2*c+(long long)min(a,b)+(long long)min(max(a,b),min(a,b)+1);
}