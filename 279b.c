#include<stdio.h>
main(){
int n,t;
scanf("%d%d",&n,&t);
int a[n];
for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
}
int temp;
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(a[i]>a[j]){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
}  //problem
int c=0,sum=0;
for(int i=0;i<n;i++){
        sum+=a[i];
    if(sum<=t)
        c++;
}
printf("%d",c);
}
