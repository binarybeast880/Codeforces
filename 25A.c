#include<stdio.h>   //own
main(){
int n,odd=0,even=0,i;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    if(a[i]%2==0){
        even++;
    }
    else if(a[i]%2==1){
        odd++;
    }
}
int lastodd,posodd;
for(i=n-1;i>=0;i--){
    if(a[i]%2==1){
        lastodd=a[i];
        posodd=i+1;
        break;
    }
}
int lasteven,poseven;
for(i=n-1;i>=0;i--){
    if(a[i]%2==0){
        lasteven=a[i];
        poseven=i+1;
    }
}
if(even==1)
printf("%d",poseven);
else if(odd==1)
    printf("%d",posodd);
}
