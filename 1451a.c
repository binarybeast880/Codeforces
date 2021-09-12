#include<stdio.h>
main(){
int t,n,c;
scanf("%d",&t);
while(t--){
    scanf("%d",&n);
    if(n==3 )
        printf("2\n");
    else if(n<=3 && n%2==0)
        printf("1\n");
    else if(n<=3 && n%2==1)
        printf("0\n");
    else if(n>3 && n%2==0)
        printf("2\n");
    else if(n>3 && n%2==1)
        printf("3\n");
}
}
