#include<stdio.h>
#include<math.h>
main(){
int t,d;
scanf("%d",&t);
int r[t],b[t];
for(int i=0;i<t;i++){
    scanf("%d",&r[i]);
}
for(int i=0;i<t;i++){
    scanf("%d",&b[i]);
}
for(int i=0;i<t;i++){
    scanf("%d",&d);
}
for(int i=0;i<t;i++){
    d=abs(r[i]-b[i]);
    if(r[i]>=1 && b[i]>=1 && d<=abs(r[i]-b[i]))
        printf("YES\n");
    else printf("NO\n");
}
}
