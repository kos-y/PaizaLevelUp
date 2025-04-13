#include <stdio.h>
#define N 9

int main()
{
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            printf("%d", i * j);
            if (j < N) {
                printf(" ");
            }
            else {
                printf("\n");
            }
        }
    }

    return 0;
}