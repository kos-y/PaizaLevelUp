#include <stdio.h>

int main()
{
    char s[101], t[101];

    scanf("%s", s);
    scanf("%s", t);
    printf("%s + %s = %s%s\n", s, t, s, t);
    return 0;
}