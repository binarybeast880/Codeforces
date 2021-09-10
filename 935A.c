#include<stdio.h>
main(){
long int n,c=0;
scanf("%ld",&n);
for(int i=1;i<=n/2;i++){
    if(n%i==0)
        c++;
}
printf("%ld",c);
}

