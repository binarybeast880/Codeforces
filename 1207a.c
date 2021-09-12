#include<stdio.h>
main(){
int t;
scanf("%d",&t);
while(t--){
    int b,p,f,h,c,ham=0,chic=0,sum=0;
    scanf("%d%d%d",&b,&p,&f);
    scanf("%d%d",&h,&c);
    if(h<c){
        while(b>0 && f>0){
                if(b>0){
            b-=2;
            f-=1;
            chic+=1;
        }
        }
       // printf("b=%d  f=%d",b,f);
        while(b>0 && p>0){
            if(b>0){
            b-=2;
            p-=1;
            ham+=1;
        }
        }
      //  printf("\n b=%d   p=%d\n",b,p);
        sum=chic*c+ham*h;
    }
    else if(h>c){
        while(b>0 && p>0){
             if(b>0){
            b-=2;
            p-=1;
            ham+=1;
        }
        }
        while(b>0 && f>0){
            //    if(b>=3){
            if(b>0){
            b-=2;
            f-=1;
            chic+=1;
        }
            }
 //       }
        sum=chic*c+ham*h;
    }
    printf("%d\n",sum);
}
}
