#include <stdio.h>

int main()
{
    int vs[] = {8, 1, 3};

    for (int i = 0; i < sizeof(vs) / sizeof(vs[0]); i++) {
        printf("%d\n", vs[i]);
    }
    return 0;
}