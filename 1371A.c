#include<stdio.h>
main(){
int t;
scanf("%d",&t);
long int n;
while(t--){
    scanf("%ld",&n);
    if(n%2==1){
        printf("%ld\n",n/2+1);
    }
    else
        printf("%ld\n",n/2);
}
}
