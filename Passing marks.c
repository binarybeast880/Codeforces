#include<stdio.h>
main(){
    int t,Amin,Bmin,Cmin,Tmin,A,B,C ;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        scanf("%d %d %d %d %d %d %d",&Amin,&Bmin,&Cmin,&Tmin,&A,&B,&C );
        if(A+B+C<Tmin){
        if(A+B+C<Tmin){
            printf("no\n");
        }
        else if(A<Amin||B<Bmin||C<Cmin){
                printf("no\n");
    }
    else{
        printf("yes\n");
    }
}
}
