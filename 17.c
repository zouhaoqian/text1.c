#include <stdio.h>
int main(void)
{
    char s[20];
    int i;
    for (i = 0; (s[i] = getchar()) != '\n'; i++)
    {
        ;
    }
    s[i] = '\0';
    for (i = 0; s[i] != '\0'; i++)
    {
        putchar(s[i]);
    }
    return 0;
}
