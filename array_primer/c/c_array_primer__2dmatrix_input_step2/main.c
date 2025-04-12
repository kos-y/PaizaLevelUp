#include <stdio.h>
#include <stdlib.h>

#define N 5

int main()
{
    int m;
    int* pv[N];

    scanf("%d", &m);
    for (int i = 0; i < N; i++) {
        pv[i] = (int*)malloc(sizeof(int) * m);
        for (int j = 0; j < m; j++) {
            scanf("%d", &pv[i][j]);
        }
    }
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d", pv[i][j]);
            if (j < m - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    for (int i = 0; i < N; i++) {
        free(pv[i]);
    }
    return 0;
}