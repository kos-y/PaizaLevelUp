#include <stdio.h>
#include <string.h>

int main()
{
    char s[10002];

    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    printf("%lu\n", strlen(s));
    return 0;
}