#include<bits/stdc++.h>  //RoY
using namespace std;
main(){
long int n,c=0;
cin>>n;
while(n!=0){
    if(n&1){
        c++;
    }
    n>>=1;
}
cout<<c<<endl;
}

