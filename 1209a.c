#include <stdio.h>
main()
{
    int n;
    scanf("%d", &n);
    int c = 0;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int min = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] < min)
            min = a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] % min == 0)
        {
            a[i] = 0;
            c++;
        }
    }
}