#include<stdio.h>
#include<string.h>
main(){
    int t,x,i,sum,j,l,count;
    char str[10000000];
    scanf("%d",&t);
    while(t--){
        scanf("%d",&x);
        while(x>0){
            int sum=0,rem;
            for(i=0;i<100000000;i++){
                rem=i%10;
                sum+=rem;
                i/=10;
            }
            if(sum==x){
                char str[]="i";
            int l=strlen(i),count=0;
            for(j=0;j<l;j++){
                if(str[j]!=str[j+1])
                    count++;
            }
            }
            }
            if(count+1==l)
                printf("%d\n",i);
            else
                printf("-1\n");
    }
}
