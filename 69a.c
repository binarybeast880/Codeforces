#include<stdio.h>   //my code
main(){
int n,x,y,z;
scanf("%d",&n);
int sumx=0,sumy=0,sumz=0;
while(n--){
    scanf("%d%d%d",&x,&y,&z);
    sumx+=x;
    sumy+=y;
    sumz+=z;
}
if(sumx==0 && sumy==0 && sumz==0)
    printf("YES\n");
else
    printf("NO\n");
}
