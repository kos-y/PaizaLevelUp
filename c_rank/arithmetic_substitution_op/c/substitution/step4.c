#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int n = 10000;
    n /= a;
    n %= b;
    printf("%d\n", n);
    return 0;
}