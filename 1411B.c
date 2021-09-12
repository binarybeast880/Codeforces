#include <stdio.h>
main()
{
    int t;
    long long int n, a, temp;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%lld", &n);
        temp = n;
        while (temp > 0)
        {
            a = temp % 10;
            temp /= 10;
            if (a > 0 && n % a != 0)
            {
                n++;
                temp = n;
            }
        }
        printf("%lld\n", n);
    }
}