#include<stdio.h>
main(){
int n;
scanf("%d",&n);
int c,d;
if(n%2==0){
    c=n/2;
    printf("%d\n",c);
    for(int i=1;i<=c;i++)
        printf("2 ");
}
else if(n%2==1){
    d=n/2;
    printf("%d\n",d);
    for(int i=1;i<=d-1;i++){
        printf("2 ");
    }
    printf("3");
}
}
