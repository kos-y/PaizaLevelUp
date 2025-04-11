#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int** pa = (int**)malloc(sizeof(int*) * n);
    int* pm = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &pm[i]);
        pa[i] = (int*)malloc(sizeof(int*) * pm[i]);
        for (int j = 0; j < pm[i]; j++) {
            scanf("%d", &pa[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < pm[i]; j++) {
            printf("%d", pa[i][j]);
            if (j < pm[i] - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    for (int i = 0; i < n; i++) {
        free(pa[i]);
    }
    free(pa);
    free(pm);
    return 0;
}