
#include<stdio.h>
main(){
    int n,a,b;
    scanf("%d",&n);
    while(n--){
        scanf("%d%d",&a,&b);
        int c=0;
            while(a>0 && b>0){
                while(a>b){
                        a-=b;
                c++;
                }
            while(b>a){
                b-=a;
            c++;
        }
            }
        printf("%d\n",c);
    }
}
