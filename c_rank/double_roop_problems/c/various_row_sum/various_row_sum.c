#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    scanf("%d", &n);
    int** ppa = (int**)calloc(n, sizeof(int*));
    int* plen = (int*)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &plen[i]);
        ppa[i] = (int*)calloc(plen[i], sizeof(int));
        for (int j = 0; j < plen[i]; j++) {
            scanf("%d", &ppa[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        int s = 0;

        for (int j = 0; j < plen[i]; j++) {
            s += ppa[i][j];
        }

        printf("%d\n", s);
    }

    for (int i = 0; i < n; i++) {
        free(ppa[i]);
    }

    free(ppa);
    free(plen);
    return 0;
}
