#include <stdio.h>
#include <stdlib.h>
#define N 3

int main()
{
    int m;
    scanf("%d", &m);

    int** pp = (int**)malloc(sizeof(int*) * N);
    for (int i = 0; i < N; i++) {
        pp[i] = (int*)malloc(sizeof(int) * m);
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &pp[i][j]);
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d", pp[i][j]);
            if (j < m - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    for (int i = 0; i < N; i++) {
        free(pp[i]);
    }
    free(pp);
    return 0;
}