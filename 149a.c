#include<stdio.h>
main(){
int k,a[12];
scanf("%d",&k);
for(int i=0;i<12;i++){
    scanf("%d",&a[i]);
}
int temp=0;
for(int i=0;i<12;i++){
    for(int j=i+1;j<12;j++){
        if(a[i]<a[j]){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
}
int sum=0,c=0;
for(int i=0;i<12;i++){
    if(sum>=k)
        break;
    else
        sum+=a[i];
       c++;
}
if(sum<k)
printf("-1\n");
else
printf("%d",c);
}
