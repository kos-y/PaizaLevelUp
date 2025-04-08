#include <stdio.h>

void out(int* p, size_t s);

int main()
{
    int vs[] = {8, 1, 3};

    out(vs, sizeof(vs) / sizeof(vs[0]));
    return 0;
}

void out(int* p, size_t s)
{
    for (int i = 1; i <= s; i++, p++) {
        printf("%d", *p);
        if (i < s) {
            printf(" ");
        }
    }

    printf("\n");
}