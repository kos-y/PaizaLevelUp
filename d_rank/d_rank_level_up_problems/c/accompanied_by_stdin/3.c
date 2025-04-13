#include <stdio.h>

int main()
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);
    int n = 0;
    n += a;
    n *= b;
    n %= c;
    printf("%d\n", n);
    return 0;
}