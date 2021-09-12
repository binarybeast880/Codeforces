#include <stdio.h>
#include <string.h>
main()
{
    char a[100000], b[100000];
    int w = 0;
    scanf("%s%s", &a, &b);
    while (w >= 0)
    {
        int i = strlen(a) - w - 1;
        int j = strlen(b) - w - 1;
        if (i >= 0 && j >= 0 && a[i] == b[j])
            w++;
        else
            break;
    }
    printf("%d", strlen(a) + strlen(b) - 2 * w);
}