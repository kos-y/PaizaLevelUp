#include <stdio.h>
#define H 3
#define W 4

int main()
{
    int n[H][W] = {
        {1, 2, 3, 4},
        {6, 5, 4, 3},
        {3, 1, 8, 1}
    };

    printf("%lu\n", sizeof(n[0]) / sizeof(n[0][0]));
    return 0;
}