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

    for (int i = n - 1; i >= 0; i--) {
        printf("%d\n", pa[i]);
    }

    free(pa);
    return 0;
}