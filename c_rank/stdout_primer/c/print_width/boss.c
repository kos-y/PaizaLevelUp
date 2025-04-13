#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m;

    scanf("%d %2d", &n, &m);
    int* pa = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &pa[i]);
    }

    char f[6];
    sprintf(f, "%%%dd\n", m);
    for (int i = 0; i < n; i++) {
        printf(f, pa[i]);
    }

    free(pa);
    return 0;
}