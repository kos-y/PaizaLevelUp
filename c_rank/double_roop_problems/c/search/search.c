#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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

    bool find = false;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            if (ppa[i][j] == 1) {
                printf("%d %d\n", i + 1, j + 1);
                find = true;
                break;
            }
        }
        
        if (find) {
            break;
        }
   }

    for (int i = 0; i < n; i++) {
        free(ppa[i]);
    }

    free(ppa);
    return 0;
}