#include<stdio.h>
main(){
    int n,i,count1=0,count2=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]==01)
            count1++;
        else{
            if(a[i]==10)
                count2++;
        }
    }
    printf("%d",(count1+count2)/2);
}
