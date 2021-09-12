#include <stdio.h>
main()
{
    int t, n;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        int a[n];
        for (int i = 1; i <= n; i++)
        {
            a[i] = i;
        }
        if (n % 2 == 0)
        {
            int temp;
            for (int i = 1; i <= n; i++)
            {
                for (int j = i + 1; j <= n; j++)
                {
                    if (a[i] < a[j])
                    {
                        temp = a[i];
                        a[i] = a[j];
                        a[j] = temp;
                    }
                }
            }
            for (int i = 1; i <= n; i++)
            {
                printf("%d ", a[i]);
            }
            printf("\n");
        }
        else if (n % 2 == 1)
        {
            int tempu1, tempu2;
            for (int i = 1; i <= n; i++)
            {
                for (int j = i + 1; j <= n; j++)
                {
                    if (a[i] < a[j])
                    {
                        tempu1 = a[i];
                        a[i] = a[j];
                        a[j] = tempu1;
                    }
                }
            }

            tempu2 = a[n / 2 + 1];
            a[n / 2 + 1] = a[n / 2 + 2];
            a[n / 2 + 2] = tempu2;
            for (int i = 1; i <= n; i++)
            {
                printf("%d ", a[i]);
            }
        }
        printf("\n");
    }
}
