#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    
    scanf("%d ", &n);
    int* pa = (int*)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d ", &pa[i]);
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d", pa[i] * pa[j]);
            if (j < n - 1) {
                printf(" ");
            }
        }

        printf("\n");
    }
    
    free(pa);
    return 0;
}
