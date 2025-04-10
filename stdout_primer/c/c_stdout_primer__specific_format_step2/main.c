#include <stdio.h>

int main()
{
    int n, a, b;

    scanf("%d %d %d", &n, &a, &b);
    for (int i = 1; i <= n; i++) {
        printf("(%d, %d)", a, b);
        if (i < n) {
            printf(", ");
        }
    }
    printf("\n");
    return 0;
}