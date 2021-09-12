#include<stdio.h>
main(){
    int t,hh,mm;
    scanf("%d",&t);
    while(t--){
            int mm1=0;
        scanf("%d  %d",&hh,&mm);
        mm1=hh*60+mm;
    printf("%d\n",1440-mm1);
    }
}
