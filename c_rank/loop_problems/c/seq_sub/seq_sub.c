#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    scanf("%d", &n);
    int* pa = (int*)calloc(n, sizeof(int));
    int* pb = (int*)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &pa[i]);
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &pb[i]);
    }

    for (int i = 0; i < n; i++) {
        printf("%d\n", pa[i] - pb[i]);
    }

    free(pa);
    free(pb);
    return 0;
}
