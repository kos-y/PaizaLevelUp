#include <stdio.h>
#include <string.h>

int main()
{
    char s[10002], c[2];

    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    scanf("%s", c);
    printf("%d\n", strcspn(s, c) + 1);
    return 0;
}