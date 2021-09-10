#include<stdio.h>
main(){
    int n,wm=0,wc=0;
    scanf("%d",&n);
    int m[n],c[n];
    for(int i=0;i<n;i++){
        scanf("%d %d",&m[i],&c[i]);
    }
    for(int i=0;i<n;i++){
        if(m[i]>c[i])
            wm++;
        else if(c[i]>m[i])
            wc++;
    }
    if(wm>wc)
        printf("Mishka");
    else if(wc>wm)
    printf("Chris");
    else
        printf("Friendship is magic!^^");
}
