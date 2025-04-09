#include <stdio.h>
#define N 9

int main()
{
    int n[N];

    for (int i = 0; i < N; i++) {
        scanf("%d ", &n[i]);
    }

    for (int i = 0; i < N; i++) {
        printf("%d", n[i]);
        if (i % 3 == 2) {
            printf("\n");
        }
        else {
            printf(" ");
        }
    }

    return 0;
}