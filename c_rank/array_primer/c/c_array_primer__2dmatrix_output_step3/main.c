#include <stdio.h>

#define H 3
#define W 3

int main()
{
    int n[H][W] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 7, 9}
    };

    printf("%lu\n", sizeof(n) / sizeof(n[0]));
    return 0;
}
