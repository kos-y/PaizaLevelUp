#include <stdio.h>

int coin(int s, int a, int b);

int main()
{
    int x, y, z;
    
    scanf("%d %d %d", &x, &y, &z);
    int c1 = coin(z, x, y);
    int c2 = coin(z, y, x);
    printf("%d\n", c1 < c2 ? c1 : c2);
    return 0;
}

int coin(int s, int a, int b)
{
    int c = s / a;
    
    s %= a;
    c += s / b;
    c += s % b;
    return c;
}