#include <stdio.h>
main(){
    int t, a, b;
    scanf("%d", &t);
    while (t--){
        scanf("%d%d", &a, &b);
        int ta = 2 * a * b, ans;
        for (int i = ta; i <= 40000; i++){
            for (int j = 1; j <= i; j++){
                if (j * j == i){
                    ans = i;
                    break;
                }
            }
        }
        printf("%d\n", ans);
    }
}
