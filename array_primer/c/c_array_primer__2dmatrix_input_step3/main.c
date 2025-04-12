#include <stdio.h>
#include <stdlib.h>
#define M 5

int main()
{
    int n;
    scanf("%d", &n);

    int** pp = (int**)malloc(sizeof(int*) * n);
    for (int i = 0; i < n; i++) {
        pp[i] = (int*)malloc(sizeof(int) * M);
        for (int j = 0; j < M; j++) {
            scanf("%d", &pp[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d", pp[i][j]);
            if (j < M - 1) {
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