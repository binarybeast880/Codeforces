#include <stdio.h> //time limit exceeded
main()
{
    long long int a, b, gcd = 1, i;
    scanf("%lld%lld", &a, &b);
    if (a > b)
    {
        for (i = 1; i <= b; i++)
            gcd *= i;
    }
    else
    {
        for (i = 1; i <= a; i++)
            gcd *= i;
    }
    printf("%lld", gcd);
}
