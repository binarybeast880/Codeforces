#include<stdio.h>
main(){
int n,a,b;
scanf("%d%d%d",&n,&a,&b);
int c[n];
for(int i=1;i<=n;i++){
    scanf("%d",&c[i]);
}
int temp=0;
for(int i=1;i<=n;i++){
    for(int j=i+1;j<=n;j++){
        if(c[i]>c[j]){
            temp=c[i];
            c[i]=c[j];
            c[j]=temp;
        }
    }
}
printf("%d",c[b+1]-c[b]);
}
