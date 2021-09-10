#include<bits/stdc++.h>
using namespace std;
main(){
int x1,y1,x2,y2;
cin>>x1>>y1>>x2>>y2;
int maxm=max(max(x1,y1),max(x2,y2));
int minm=min(min(x1,y1),min(x2,y2));
int cntmn=0,cntmx=0;
if(x1==maxm)
    cntmx++;
if(y1==maxm)
    cntmx++;
if(x2==maxm)
    cntmx++;
if(y2==maxm)
    cntmx++;
if(x1==minm)
    cntmn++;
if(y1==minm)
    cntmn++;
if(x2==minm)
    cntmn++;
if(y2==minm)
    cntmn++;
if(x1==x2 && y1==y2 && x1==y1)
    cout<<
}
