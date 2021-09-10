#include<math.h>
#include<stdio.h>
main(){
int a,b;
scanf("%d%d",&a,&b);
int c=a+b;
int anew=0,bnew=0,cnew=0;
int i=0;
int c1=0;
int k=0;
while(c>0){
    int remf=c%10;
    if(remf==0)
        k+=0;
    else{
            c1+=remf*pow(10,k);
    k++;
}
c/=10;
}
while(a>0){
    int rem1=a%10;
    if(rem1==0)
        i+=0;
    else{
        anew+=rem1*pow(10,i);
    i++;
    }
    a/=10;
}
int j=0;
while(b>0){
    int rem2=b%10;
    if(rem2==0)
        j+=0;
    else{
        bnew+=rem2*pow(10,j);
    j++;
    }
    b/=10;
}
cnew=anew+bnew;
if(cnew==c1)
    printf("YES");
else
printf("NO");
}
