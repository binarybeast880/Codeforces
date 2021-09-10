#include<stdio.h>
main(){
int n,sum=0,i,j;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++){
    sum+=a[i];
}

int temp;
for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        if(a[i]<a[j]){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
}
int sum1=0,ans;
for(i=0;i<n;i++){
    sum1+=a[i];
    if(sum1>sum/2){
        ans=i+1;
        break;
    }
    }
    printf("%d",ans);
}
