#include <stdio.h>
#define N 9

int main()
{
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            printf("%2d", i * j);
            if (j < N) {
                printf(" | ");
            }
        }
        printf("\n");
        if (i < N) {
            printf("==========================================\n");
        }
    }
    
    return 0;
}