#include <stdio.h>
#define LEN 10

int main()
{
    char s[LEN + 1], t[LEN + 1];

    scanf("%s ", s);
    scanf("%s ", t);
    printf("%s\n%s\n", s, t);
    return 0;
}