#include <stdio.h>
#define N 10

int main()
{
    char s[N][11];

    for (int i = 0; i < N; i++) {
        scanf("%10s", s[i]);
    }

    for (int i = 0; i < N; i++) {
        printf("%s\n", s[i]);
    }

    return 0;
}