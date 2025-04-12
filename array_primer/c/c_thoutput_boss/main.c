#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, k;

    scanf("%d %d", &n, &k);
    int* pa = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &pa[i]);
    }
    printf("%d", pa[k - 1]);
    free(pa);
    return 0;
}