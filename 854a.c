#include<stdio.h>
main(){
int n,a,b,flag1=0,flag2=0,i,j,k;
scanf("%d",&n);
for(int i=1;i<n;i++){
    for(int j=1;j<n;j++){
        if(i+j==n){
                if(i<j){
          int c=0,d=0;
          for(k=2;k<i;k++){
            if(i%k==0)
                c++;
            if(c==1)
                break;
          }
          for(int z=2;z<j;z++){
            if(j%z==0)
                d++;
            if(d==1)
                break;
          }
          if(d==0 && c==0)
            flag1=i ;
          flag2=j;
          break;
        }
    }
}
}
printf("%d %d",flag1,flag2);
}
