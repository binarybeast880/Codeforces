#include<stdio.h> //problem
main(){
int t,x,y,a,b;
scanf("%d",&t);
while(t--){
    scanf("%d%d",&x,&y);
    scanf("%d%d",&a,&b);
    if(x>=y){
if(a+a<=b){
printf("%d\n",(x+y)*a);
}
else if(a+a>=b){
    printf("%d\n",y*b+(x-y)*a);
}
else{
    if(a+a<=b)
        printf("%d\n",(x+y)*a);
    else
        printf("%d\n",y*b+(x-y)*a);
}
}
}
}
