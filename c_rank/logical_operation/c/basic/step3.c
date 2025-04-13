#include <stdio.h>

int main()
{
    int a;

    scanf("%d", &a);
    printf("%d\n", (~a) & 0x0001);
    return 0;
}