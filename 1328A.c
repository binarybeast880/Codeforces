#include<stdio.h>
main(){
    int t,a,b,k;
    scanf("%d",&t);
    while(t--){
        k=0;
        scanf("%d%d",&a,&b);
       if(a%b!=0){
        k=b-(a%b);
        printf("%d\n",k);
      }
      else
        printf("0\n");
        }
    }
