#include <stdio.h>

int main()
{
    int x, y, z;

    scanf("%d %d %d", &x, &y, &z);
    printf("%s\n", (x >= 10 && y >= 10) || z >= 10 ? "YES" : "NO");
    return 0;
}