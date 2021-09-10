#include<stdio.h>
main(){
int n,h,i,count1=0,count2=0;
scanf("%d %d",&n,&h);
int a[n];
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++){
    if(a[i]<=h){
        count1++;
    }
    else{
        count2+=2;
    }
}
printf("%d",count1+count2);
}
