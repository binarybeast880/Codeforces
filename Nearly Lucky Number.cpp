#include<stdio.h>
main(){
	int n,c,b;
	scanf("%d",&n);
	while(n>0){
		int rem=n%10;
		n/=10;
		if(rem==4 && rem== 7)
		printf("YES");
		else printf("NO");
		}
	}