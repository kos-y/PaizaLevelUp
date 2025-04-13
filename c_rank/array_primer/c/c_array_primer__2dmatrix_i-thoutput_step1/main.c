#include <stdio.h>
#define H 4
#define W 4

int main()
{
    int a[H][W] = {
        {1, 2, 3, 4},
        {10, 100, 0, 5},
        {8, 1, 3, 8},
        {15, 34, 94, 25}
    };

    int k, l;

    scanf("%d %d", &k, &l);
    printf("%d\n", a[k - 1][l - 1]);
    return 0;
}