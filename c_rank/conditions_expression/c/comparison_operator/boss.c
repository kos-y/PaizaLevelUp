#include <stdio.h>
#include <string.h>

#define LEN 21

int main()
{
    char s[LEN], t[LEN];

    scanf("%s  %s", s, t);
    printf("%d\n", strcmp(s, t) == 0);
    return 0;
}