#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int* pa = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d ", &pa[i]);
    }

    int* pb = (int*)malloc(sizeof(int) * m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &pb[i]);
    }

    for (int i = 0, j = 0, k = 0; i < n; i++) {
        printf("%d", pa[i]);
        if (j++ < pb[k] - 1) {
            printf(" ");
        }
        else {
            printf("\n");
            j = 0;
            k++;
        }
    }

    free(pa);
    free(pb);
    return 0;
}