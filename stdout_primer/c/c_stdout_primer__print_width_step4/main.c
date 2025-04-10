#include <stdio.h>

int main()
{
    int n, m;
    char f[6];

    scanf("%d %2d", &n, &m);
    sprintf(f, "%%%dd\n", m);
    printf(f, n);
    return 0;
}