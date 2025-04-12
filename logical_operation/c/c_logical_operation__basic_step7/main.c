#include <stdio.h>

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);
    printf("%d\n", (~(a ^ b)) & 0x0001);
    return 0;
}