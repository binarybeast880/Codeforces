#include<stdio.h>
main(){
    int size,counth=0,counte=0;
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<size;i++){
        if(a[i]==0)
        counte++;
        else
            counth++;
    }
    if(counte==size)
        printf("Easy");
    else printf("Hard");
}
