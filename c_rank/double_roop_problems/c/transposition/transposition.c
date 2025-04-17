#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    
    int** ppa = (int**)calloc(n, sizeof(int*));
    for (int i = 0; i < n; i++) {
        ppa[i] = (int*)calloc(k, sizeof(int));
        for (int j = 0; j < k; j++) {
            scanf("%d ", &ppa[i][j]);
        }
    }
    
    for (int j = 0; j < k; j++) {
        for (int i = 0; i < n; i++) {
            printf("%d", ppa[i][j]);
            if (i < n - 1) {
                printf(" ");
            }
        }

        printf("\n");
    }
    
    for (int i = 0; i < n; i++) {
        free(ppa[i]);
    }
    
    free(ppa);
    return 0;
}