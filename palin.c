#include <stdio.h>
main()
{
    int t, k;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &k);
        int temp = k;
        for (int i = k + 1; i <= 10000; i++)
        {
            while (i > 0)
            {
                int rev = rev % 10 + i % 10;
                i /= 10;
            }
            if (i == temp)
                printf("%d\n", i);
        }
    }
}