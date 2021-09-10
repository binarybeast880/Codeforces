#include<stdio.h>
main(){
int n,i,c=0,a[10]={4,7,47,74,447,474,477,774,747,744};
scanf("%d",&n);
for(i=0;i<10;i++){
    if(n%a[i]==0 || n==a[i]){
        printf("YES\n");
        return 0;
    }
    else c++;
}
if(c==10)
    printf("NO\n");
}
