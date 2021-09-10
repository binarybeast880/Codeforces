#include<stdio.h>
main(){
    int m,n;
    scanf("%d%d",&n,&m);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int sum=0,temp=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    int c=0;
    for(int i=0;i<n;i++){
            if(a[i]<0){                  //my code
        sum+=abs(a[i]);
        c++;
        if(c==m)
            break;
    }
    }
    printf("%d",sum);
}
