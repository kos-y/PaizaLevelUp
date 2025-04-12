#include <stdio.h>

int main()
{
    int n = 10000;
    n /= 361;
    n %= 28;
    printf("%d\n", n);
    return 0;
}