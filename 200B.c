#include<stdio.h>   //my own code
main(){
    int n,i;
    float sum=0.0;
    scanf("%d",&n);
    float a[n];
    for(i=0;i<n;i++){
        scanf("%f",&a[i]);
        sum+=a[i];
    }
    printf("%.12f",sum/n);
}
