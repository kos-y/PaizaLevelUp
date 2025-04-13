#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, n;

    scanf("%d %d %d", &a, &b, &n);
    int* pa = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &pa[i]);
    }

    for (int i = a - 1; i < b; i++) {
        printf("%d\n", pa[i]);
    }

    free(pa);
    return 0;
}