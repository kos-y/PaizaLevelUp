#include <stdio.h>

int main()
{
    int n, k;

    scanf("%d %d", &n, &k);
    for (int i = 0; i < k; i++) {
        for (int j = 1; j <= n; j++) {
            printf("%d", j);
            if (j < n) {
                printf(" ");
            }
        }

        printf("\n");
    }
    
    return 0;
}