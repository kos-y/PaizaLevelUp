#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    int n;

    scanf("%d", &n);
    int* pa = (int*)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &pa[i]);
    }

    int m = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (m > pa[i]) {
            m = pa[i];
        }
    }

    printf("%d\n", m);
    free(pa);
    return 0;
}