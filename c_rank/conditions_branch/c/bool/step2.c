#include <stdio.h>
#include <ctype.h>

int main()
{
    char c;

    scanf("%c", &c);
    printf("%s\n", isupper(c) ? "YES" : "NO");
    return 0;
}