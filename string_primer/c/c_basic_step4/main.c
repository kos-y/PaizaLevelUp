#include <stdio.h>
#include <string.h>

int main()
{
    char s[102];

    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    printf(strcmp(s, "paiza") == 0 ? "YES" : "NO");
    return 0;
}