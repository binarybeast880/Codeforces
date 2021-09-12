/*
#include<stdio.h>
main(){
int t,n;
scanf("%d",&t);
while(t--){
    scanf("%d",&n);
    int a[n],c1=0,c2=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]==1){
            c1+=1;
        }
        else if(a[i]==2){
            c2+=2;
        }
    }
    if((c1==c2 &&c1>0 &&c2>0)||(c1==0 && c2%2==0 && c2>1)||(c2==0 && c1%2==0 && c1>1))
        printf("YES\n");
    else
        printf("NO\n");
}
}
*/

#include<stdio.h>
main(){
int t,n;
scanf("%d",&t);
while(t--){
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int c1=0,c2=0,sum1=0,sum2=0;
    for(int i=0;i<n;i++){
        if(a[i]==1)
            c1++;
        else
            c2++;
    }
    if(c1%2==0 && c2%2==0)
        printf("YES\n");
    else if(c2%2==1 && c1%2==0 && c1>0)
        printf("YES\n");
    //else if()
    else
        printf("NO\n");
}
}
