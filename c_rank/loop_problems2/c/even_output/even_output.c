#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    scanf("%d", &n);
    int* pa = (int*)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &pa[i]);
    }

    for (int i = 0; i < n; i++) {
        if (pa[i] % 2 != 0) {
            printf("%d\n", pa[i]);
        }
    }

    free(pa);
    return 0;
}