#include <stdio.h>
main()
{
    int t;
    long int n;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%ld", &n);
        int y = n % 2020;
        int x = (n - y) / 2020 - y; //problem
        if (x >= 0 && 2020 * x + 2021 * y == n)
            printf("YES\n");
        else
            printf("NO\n");
    }
}