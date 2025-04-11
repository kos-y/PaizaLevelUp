#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int** pp = (int**)malloc(sizeof(int*) * n);
    for (int i = 0; i < n; i++) {
        pp[i] = (int*)malloc(sizeof(int) * m);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &pp[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d", pp[i][j]);
            if (j < m - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    for (int i = 0; i < n; i++) {
        free(pp[i]);
    }
    free(pp);
    return 0;
}