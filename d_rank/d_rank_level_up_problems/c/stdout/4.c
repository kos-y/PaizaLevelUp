#include <stdio.h>

int main()
{
    int v[] = {8, 1, 3};
    for (int i = 0; i < sizeof(v) / sizeof(v[0]); i++) {
        printf("%d\n", v[i]);
    }

    return 0;
}