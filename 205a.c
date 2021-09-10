#include<stdio.h>   //my own code
main(){
    int n;
    scanf("%d",&n);
    long long int a[n],pos=1,i,j;
    for(i=1;i<=n;i++){
        scanf("%I64d",&a[i]);
    }
   long long int min=a[1];
   for(i=1;i<=n;i++){
    if(a[i]<min){
        min=a[i];
        pos=i;
    }
   }
   long long int c=0;
   for(i=1;i<=n;i++){
    if(a[i]==min)
        c++;
   }
   if(c>1){
    printf("Still Rozdil");
   }
   else printf("%lld",pos);
    }
