#include <stdio.h>
#define COUNT 10
#define LEN 10

int main()
{
    char s[COUNT][LEN + 1], f[5];

    sprintf(f, "%%%ds", LEN);
    for (int i = 0; i < COUNT; i++) {
        scanf(f, s[i]);
    }

    for (int i = 0; i < COUNT; i++) {
        printf("%s", s[i]);
        if (i < COUNT - 1) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}