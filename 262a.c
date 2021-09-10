#include<stdio.h>     //my own code
main(){
int  n,k,count=0;
scanf("%d%d",&n,&k);
int a[n];
for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
    int dig=0,c=0;
    while(a[i]>0){
        int rem=a[i]%10;
        if(rem==4 || rem==7){
                c++;
        }
        a[i]/=10;
    }
    if( c<=k)
        count++;
}
printf("%d",count);
}
