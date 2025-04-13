#include <stdio.h>

int main()
{
    double n;
    int m;

    scanf("%lf %d", &n, &m);

    char f[6];
    sprintf(f, "%%.%dlf", m);
    printf(f, n);
    return 0;
}