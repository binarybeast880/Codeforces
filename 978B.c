#include <stdio.h>
main()
{
    int n, count = 0;
    scanf("%d", &n);
    char s[n];
    scanf("%s", &s);
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'x' && s[i + 1] == 'x' && s[i + 2] == 'x')
            count++;
    }
    printf("%d", count);
}