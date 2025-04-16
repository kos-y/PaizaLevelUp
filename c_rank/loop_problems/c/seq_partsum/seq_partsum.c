#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, a, b, sum = 0;

    scanf("%d %d %d", &n, &a, &b);
    int* pa = (int*)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &pa[i]);
    }

    for (int i = a - 1; i < b; i++) {
        sum += pa[i];
    }

    printf("%d\n", sum);
    free(pa);
    return 0;
}