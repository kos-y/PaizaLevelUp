#include <stdio.h>

int main()
{
    for (int i = 1; i <= 9; i++) {
        printf("%d", i * 8);
        if (i < 9) {
            printf(" ");
        }
    }

    printf("\n");
    return 0;
}