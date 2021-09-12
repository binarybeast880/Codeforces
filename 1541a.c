#include<stdio.h>
main(){
int t,n;
scanf("%d\n",&t);
while(t--){
    scanf("%d",&n);
    int a[n];
    if(n==2){
        printf("2  1\n");
    }
    else{
    for(int i=1;i<=n;i++){
        a[i]=i;
    }
    int temp;
    for(int i=1;i<=n;i++){
        if(a[i]==i){
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    for(int i=1;i<=n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    temp=0;
    }
}
}
