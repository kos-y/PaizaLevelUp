#include <stdio.h>

int main()
{
    char s[102];

    fgets(s, sizeof(s), stdin);
    printf(s);
    return 0;
}