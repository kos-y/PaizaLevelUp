#include <stdio.h>
#define N 10

int main()
{
    int k[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &k[i]);
    }

    for (int i = 0; i < N; i++) {
        printf("%d\n", k[i]);
    }

    return 0;
}