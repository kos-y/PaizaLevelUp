#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, d;

    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("%d\n", (int)pow((a + b) * c, 2) % d);
    return 0;
}