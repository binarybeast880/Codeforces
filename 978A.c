#include<stdio.h>
main(){
    int size,i,j,k;
    scanf("%d",&size);
    int a[size];
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(a[i]==a[j]){
                for(k=j;k<size-1;k++){
                    a[k]=a[k+1];
                }
                size--;                                 //having problem
                j--;
            }
        }
    }
    printf("%d\n",size);
    for(i=0;i<size;i++){
    printf("%d ",a[i]);
}
}
