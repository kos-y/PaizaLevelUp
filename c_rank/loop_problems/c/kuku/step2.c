#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);
    for (int i = 1; i <= 9; i++) {
        printf("%d", i * n);
        if (i < 9) {
            printf(" ");
        }
    }

    return 0;
}