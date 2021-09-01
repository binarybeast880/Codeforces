#include<stdio.h>
main(){
int n;
scanf("%d",&n);
if(n>=1 && n<=100){
if(n==2)
    printf("NO\n");
    else if(n%2==0)
        printf("YES");
    else printf("NO");
}
}

