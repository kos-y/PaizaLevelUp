#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, n;
    int* pa;

    scanf("%d %d %d", &a, &b, &n);
    pa = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &pa[i]);
    }

    for (int i = 0; i < n; i++) {
        if (pa[i] == a) {
            pa[i] = b;
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d\n", pa[i]);
    }

    free(pa);
    return 0;
}