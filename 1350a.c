#include <stdio.h>
main()
{
    int t, n, k;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d%d", &n, &k);
        int c = 0;
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
                c++;
        }
        if (c == 0)
        {
            while (k--)
            {
                n += n;
            }
        }
        else if (c > 0)
        {
            while (k--)
            {
                n += 2;
            }
        }
        printf("%d\n", n);
    }
}