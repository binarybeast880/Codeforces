#include<stdio.h>
int main()
{
    char s[100];
    gets(s);
    int len = strlen(s);
    sort(s, s+len);
    int count =0;
    for(int i=0; i<len; i++)
    {
        if(s[i] != s[i+1])
        {
            count++;
        }
    }
    if(count%2==0)
    {
        printf("CHAT WITH HER!\n");
    }
    else
    {
        printf("IGNORE HIM!\n");
    }
}
