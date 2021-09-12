/* #include<stdio.h>
main(){
  int t,n;
  char str[52];
  scanf("%d",&t);
  while(t--){
        scanf("%d",&n);
  for(int i=0;i<n;i++){
    scanf("%s",&str[i]);
  }
    int ans=0;
    int bal=0;
    for(int i=0;i<n;i++){
        if(str[i]=='(')
            bal++;
            else{
                bal--;
        if(bal<0){
            bal=0;
            ans++;
           }
    }

  }
  printf("%d\n",ans);
}

}
*/
#include<stdio.h>
#include<string.h>
main(){
int t,n;
scanf("%d",&t);
while(t--){
    scanf("%d",&n);
    char s[n];
    scanf("%s",&s);
    int ans=0,bal=0;
    for(int i=0;i<n;i++){
        if(s[i]=='(')
            bal++;
        else
        bal--;
        if(bal<0){
            bal=0;
            ans++;
        }
    }
    printf("%d\n",ans);
}
}
