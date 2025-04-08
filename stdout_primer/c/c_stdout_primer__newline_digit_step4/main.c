#include <stdio.h>

int main()
{
    int vs[] = {813, 1, 2, 923874, 23648, 782356, 3256, 2342, 24324, 112};

    for (int i = 0; i < sizeof(vs) / sizeof(vs[0]); i++) {
        printf("%d\n", vs[i]);
    }
    return 0;
}