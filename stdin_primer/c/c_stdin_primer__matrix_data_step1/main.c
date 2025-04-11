#include <stdio.h>
#define N 3

int main()
{
    int a[N][N];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d", a[i][j]);
            if (j < N - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}