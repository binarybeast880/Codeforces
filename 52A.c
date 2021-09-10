#include<stdio.h>
main(){
long long int n;
scanf("%lld",&n);
long long int a[n];
for(int i=0;i<n;i++){
    scanf("%lld",&a[i]);
}
int c1=1,c2=1,c3=1;
for(int i=0;i<n;i++){
    if(a[i]==1)
        c1++;
    else if(a[i]==2)
    c2++;
    else if(a[i]==3)
    c3++;
}
if(c1==2)
    c1=1;
if(c2==2)
    c2=1;
if(c3==2)
    c3=1;
if(c1>c2 && c1>c3){
    printf("%lld",n+1-c1);
}
else if(c2>c1 && c2>c3){
    printf("%lld",n+1-c2);   //problem
}
else if(c3>c1 && c3>c2){
    printf("%lld",n+1-c3);
}
else if(c1==c2 && c2==c3)
    printf("%d",c1+c2);
}
