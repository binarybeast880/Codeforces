#include<stdio.h>
main(){
    int a[3],i;
    for(i=0;i<3;i++){
        scanf("%d",&a[i]);
    }
    int temp=0;                             //my code
    for(i=0;i<3;i++){
        for(int j=i+1;j<3;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    int ans=abs(a[0]-a[1])+abs(a[1]-a[2]);
    printf("%d",ans);
}
