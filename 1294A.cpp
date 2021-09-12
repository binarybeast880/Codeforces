#include<stdio.h>
main(){
	int t,a,b,c,n;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d%d%d",&a,&b,&c,&n);
		int A,B,C;
		for(A=0,B=0,C=0;A<=n,B<=n,C<=n;A++,B++,C++){
			if(A+B+C==n){
				if(a+A==b+B==c+C)
				printf("YES\n");
				else printf("NO\n");
			}
		}
	}
}
