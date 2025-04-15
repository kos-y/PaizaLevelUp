#include <stdio.h>

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);
    printf("%s\n", a >= 10 && b >= 10 ? "YES" : "NO");
    return 0;
}