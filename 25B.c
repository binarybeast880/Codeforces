#include<stdio.h>
#include<string.h>
main(){
    char str[105];
    int n;
    scanf("%d",&n);
   for(int i=0;i<n;i++){
    scanf("%c",&str[i]);
   }
   for(int i=0;i<n+2;i++){
    if(i>1 && i%2!=0 && i!=n){
        printf("-");
        printf("%c",str[i]);
    }      //problem
    else
        printf("%c",str[i]);
   }
    }
