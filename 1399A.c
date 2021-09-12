/* #include<stdio.h>
#include<math.h>
main(){
    int t,n,i,c=0;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
          int t=0;
          for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(a[i]>a[j])
                    t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
          }
          for(i=0;i<n;i++){
            if(a[i]-a[i-1]>1){
                c=1;
                printf("NO\n");
                break;
            }
          }
          if(c==0)
            printf("YES\n");
}
}
*/
/* #include<stdio.h>
#include<math.h>
main(){
    int t,n,i,j;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int a[n];
        for(i=1;i<=n;i++){
            scanf("%d",&a[i]);
        }
        for(i=1;i<=n;i++){
        for(j=i+1;j<=n;j++){
            if(i!=j && abs(a[i]-a[j]<=1)){
                    if(a[i]<=a[j]){
                    a[i]=0;
                    n--;
                    }
                    else
                    a[j]=0;
                    n--;
                }
        }
        }
        int c=0;
        for(i=1;i<=n;i++){
            if(a[i]==0)
                c++;
        }
        if(n==1 && c==n-1)
        printf("YES\n");
        else
        printf("NO\n");
    }
}
*/




//RoY
#include<stdio.h>
main(){
int t,n,i,j,temp;
scanf("%d",&t);
while(t--){
    scanf("%d",&n);
    int a[n];
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++){
        for(j=i+1;j<=n;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    int c=0;
    for(i=2;i<=n;i++){
        if(a[i]-a[i-1]>1)
            c++;
    }
    if(c>0){
        printf("NO\n");
    }
    else
        printf("YES\n");
}
}
