#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, k, l;
    int** a;

    scanf("%d %d %d %d", &n, &m, &k, &l);
    a = (int**)malloc(sizeof(int*) * n);
    for (int i = 0; i < n; i++) {
        a[i] = (int*)malloc(sizeof(int) * m);
        for (int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("%d\n", a[k - 1][l - 1]);

    for (int i = 0; i < n; i++) {
        free(a[i]);
    }
    free(a);

    return 0;
}