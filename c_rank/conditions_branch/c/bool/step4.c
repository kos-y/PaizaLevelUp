#include <stdio.h>

int main()
{
    int x;

    scanf("%d", &x);
    printf("%s\n", !(x >= 10) ? "YES" : "NO");
    return 0;
}