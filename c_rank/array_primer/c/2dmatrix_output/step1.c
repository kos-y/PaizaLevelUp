#include <stdio.h>

int main()
{
    int n[2][6] = {
        {1, 2, 3, 4, 5, 6},
        {8, 1, 3, 3, 1, 8}
    };

    printf("%d\n", sizeof(n) / sizeof(n[0][0]));
}