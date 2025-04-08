#include <stdio.h>
#define N 3
#define LEN 10
#define F_LEN 4

int main()
{
    char f[F_LEN + 1];
    char s[N][LEN + 1];

    sprintf(f, "%%%ds", LEN);
    for (int i = 0; i < N; i++) {
        scanf(f, s[i]);
    }

    for (int i = 0; i < N; i++) {
        printf("%s", s[i]);
        if (i < N - 1) {
            printf("|");
        }
    }
    printf("\n");

    return 0;
}