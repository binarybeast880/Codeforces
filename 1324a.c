#include <stdio.h>
main()
{
    int t, n;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        int a[n], od = 0, ev = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            if (a[i] % 2 == 1)
                od++;
            else
                ev++;
        }
        if (od == n || ev == n)
            printf("YES\n");
        else
            printf("NO\n");
    }
}