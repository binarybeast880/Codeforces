#include <stdio.h>
main()
{
    int t, x, y = 0;
    scanf("%d", &t);
    while (t--)
    {
        int c = 0;
        scanf("%d", &x);
        for (int i = 1; i < 100; i++)
        {
            if (y + i - x < y - 1 - x)
                y += i;
            else
                y--;
            if (y == x)
                break;
        }
        printf("%d\n", c);
    }
}