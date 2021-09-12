#include<stdio.h>
main(){
int n,sum=0;
scanf("%d",&n);
int a[n],temp;
for(int i=1;i<=n;i++){
    scanf("%d",&a[i]);
}
for(int i=1;i<=n;i++){
    for(int j=i+1;j<=n;j++){
        if(a[i]>a[j]){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
}
for(int i=1;i<=n;i+=2){
    sum+=a[i+1]-a[i];
}
printf("%d",sum);
}
