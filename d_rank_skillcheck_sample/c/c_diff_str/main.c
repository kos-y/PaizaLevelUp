#include <stdio.h>
#include <string.h>

int main()
{
    char a[101], b[101];

    scanf("%s ", a);
    scanf("%s ", b);
    printf("%s\n", strcmp(a, b) == 0 ? "OK" : "NG");
    return 0;
}