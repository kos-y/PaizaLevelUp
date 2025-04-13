#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int* pa = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &pa[i]);
    }

    for (int i = 0; i < n; i++) {
        printf("%d\n", pa[i]);
    }

    free(pa);
    return 0;
}