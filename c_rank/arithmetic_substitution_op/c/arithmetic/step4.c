#include <stdio.h>

int main()
{
    int a, b, c;

    scanf("%d %d %d\n", &a, &b, &c);
    printf("%d %d\n", a * a, b * b + c * c);
    return 0;
}