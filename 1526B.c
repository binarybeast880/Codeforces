#include<stdio.h>
main(){
    int t,c;
    long int x;
    scanf("%d",&t);
    while(t--){
        scanf("%ld",&x);
        c=0;
        for(int i=0;i*111<=x;i++){
            if((x-111*i)%11==0){
                c=1;
                break;
            }
        }
        if(c==1)
            printf("YES\n");
        else
            printf("NO\n");
}
}
