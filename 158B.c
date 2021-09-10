// #include<stdio.h>
// main(){
// int n;
// scanf("%d",&n);
// int s[n],taxi=0,sum=0;
// for(int i=0;i<n;i++){
//     scanf("%d",&s[i]);
//     sum+=s[i];
// }
// int avg=sum/4;
// if(avg*4==sum)
//     printf("%d",avg);
// else if(avg*4<sum)

//     printf("%d",avg+1);
// }
//

#include <stdio.h>
main()
{
    int n, sum = 0, c = 1;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    { // 1 2 3 3 4
        sum += a[i];
        if (sum > 4)
        {
            sum -= 4;
            c++;
        }
    }
    printf("%d\n", c);
}

//      1   2   3   3    4    13__4
//      1  1  2  2  3  3   4   4    20__