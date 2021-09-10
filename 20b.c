#include<stdio.h>
#include<math.h>
main(){
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
if(a==b && b==c)
    printf("0\n");
else if(a!=0 && b!=0){
int d=b*b-4*a*c;
float root1,root2;
printf("2\n");
root1=(-b-sqrt(d))/2*a;
root2=(-b+sqrt(d))/2*a;
printf("%.10f\n%.10f\n",root1,root2);
}
else
    printf("-1");
}
