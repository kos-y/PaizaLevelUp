#include <stdio.h>
#include <string.h>

int main()
{
    char s[21];

    scanf("%s", s);
    printf("%s\n", strcmp(s, "paiza") == 0 ? "YES" : "NO");
    return 0;
}