#include <stdio.h>
main()
{
    int t, n, m;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d%d", &n, &m);
        printf("%d\n", (n * m + 1) / 2);
    }
}
