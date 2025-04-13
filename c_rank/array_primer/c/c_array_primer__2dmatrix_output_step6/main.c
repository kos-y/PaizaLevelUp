#include <stdio.h>
#define H 3
#define W 3

int main()
{
    int v[H][W] = {
        {1, 2, 3},
        {8, 1, 3},
        {10, 100, 1}
    };

    printf("%d\n", v[1][2]);
    return 0;
}