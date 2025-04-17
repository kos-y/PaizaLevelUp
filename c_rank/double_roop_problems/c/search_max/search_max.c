#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    int n, k;

    scanf("%d %d", &n, &k);
    int** ppa = (int**)calloc(n, sizeof(int*));
    for (int i = 0; i < n; i++) {
        ppa[i] = (int*)calloc(k, sizeof(int*));
        for (int j = 0; j < k; j++) {
            scanf("%d", &ppa[i][j]);
        }
    }

    int m = INT_MIN;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            if (m < ppa[i][j]) {
                m = ppa[i][j];
            }
        }
   }

   printf("%d\n", m);

    for (int i = 0; i < n; i++) {
        free(ppa[i]);
    }

    free(ppa);
    return 0;
}