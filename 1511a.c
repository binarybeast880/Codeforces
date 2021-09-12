#include<stdio.h>
main(){
int t,n;
scanf("%d",&t);
while(t--){        //my own code
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int c1=0,c3=0;
    for(int i=0;i<n;i++){
        if(a[i]==1)
            c1++;
        else if(a[i]==3)
            c3++;
    }
    printf("%d\n",c1+c3);
}
}
