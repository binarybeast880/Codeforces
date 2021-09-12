#include<stdio.h>
main(){
    int arr[4],a,b,c,max=0,i,j;
    for(i=0;i<4;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<4;i++){
        for(j=i+1;j<4;j++){
            if(arr[i]>arr[j]){
                max=arr[i];
                arr[i]=arr[j];
                arr[j]=max;
            }
        }
    }
    a=arr[3]-arr[0];
    b=arr[3]-arr[2];
    c=arr[3]-arr[1];
    printf("%d %d %d",a,b,c);
}
