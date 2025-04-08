#include <stdio.h>
#define N 10

int main()
{
    int n[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &n[i]);
    }

    for (int i = 0; i < N; i++) {
        printf("%d", n[i]);
        if (i < N - 1) {
            printf(" | ");
        }
    }
    printf("\n");

    return 0;
}