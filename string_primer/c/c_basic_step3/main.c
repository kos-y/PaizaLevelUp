#include <stdio.h>

int main()
{
    char s[102];
    int i;

    fgets(s, sizeof(s), stdin);
    scanf("%d", &i);
    printf("%c\n", s[i - 1]);
    return 0;
}