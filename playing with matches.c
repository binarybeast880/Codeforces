#include<stdio.h>
main(){
    int t,a,b,rem,m;
    scanf("%d",&t);
    while(t--){
        int total=0,s=0;
        scanf("%d%d",&a,&b);
        s=a+b;
        while(s>0){
            rem=s%10;
            if(rem==0||rem==6||rem==9)
                m=6;
            else if(rem==1)
                m=2;
            else if(rem==2||rem==3||rem==5)
                m=5;
            else if(rem==4)
                m=4;
            else if(rem==7)
                m=3;
            else{
                if(rem==8)
                    m=7;
            }
            total+=m;
            s/=10;
        }
        printf("%d\n",total);
    }
}


