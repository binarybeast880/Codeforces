#include<stdio.h>
main(){
long int n,ct=0;
scanf("%ld",&n);
while(n>0){
    if(n>=100){
    n-=100;
    ct++;
}
    else if(n>=20){
    n-=20;
    ct++;
}
    else if(n>=10){
        n-=10;
	ct++;
}
    else if(n>=5){
        n-=5;
    ct++;
}
    else if(n>=1){
        n-=1;
		ct++;
	}
}
printf("%ld",ct);
}

